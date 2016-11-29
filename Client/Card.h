namespace Card{
	//ʹ�õ����ռ�
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Net;
	using namespace System::Net::Sockets;
	using namespace System::Text;
	using namespace MySql::Data::MySqlClient;
	using namespace Scut_helper_Scoket;
	using namespace User;
	//һ��ͨ����
	ref class card{
	public:
		card(){
			_stu_master=gcnew _student_do;
			_stu_finder=gcnew _student_do;
		}
		String ^ master;
		String ^ finder;
		String ^ curdate;
		_student_do ^ _stu_master;
		_student_do ^ _stu_finder;
		//ͨ��ѧ�Ż�ȡ��ϸ��Ϣ
		bool getpeople(){
			ClientDo ^Sent=gcnew ClientDo;
			//��ȡ��Ƭ��
			Sent->op_Setport(4873);
			Sent->op_Connect_Server();
			Sent->op_Send(master);
			String^Response=Sent->op_Receive();

			if(Response->Contains("N")){
				return 0;
			}
			else{
				_stu_master->decode(Response);
			}
			//��ȡ�񿨷�
			Sent->op_Setport(4873);
			Sent->op_Connect_Server();
			Sent->op_Send(finder);
			Response=Sent->op_Receive();
			if(Response->Contains("N")){
				return 0;
			}
			else{
				_stu_finder->decode(Response);
			}
			return 1;
		}
		//���ÿ�Ƭ��Ϣ
		void setmsg(String^ t1,String^ t2){
			this->master=t1;
			this->finder=t2;
			_stu_master->Set_SchoolId(t1);
			_stu_finder->Set_SchoolId(t2);
			setcurdate();
		}
		//���õ�ǰʱ��
		void setcurdate(){
			curdate=(String::Format("{0:G}",DateTime::Now));
		}
		//����Ƭ�����
		String ^ code(){
			String ^ temp="";
			temp="$"+curdate+"$"+
				master+"$"+
				finder+"$";
			return temp;
		}

		//����Ƭ�����
		int decode(String^out){
			int i=1;
			String^temp="";
			if(out->Length>0&&out[0]=='$'){
				//------------------------------
				//ʱ��
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->curdate=temp;
				//------------------------------
				//����
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->master=temp;
				this->_stu_master->Set_SchoolId(temp);
				//------------------------------
				//�񿨷�
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->finder=temp;
				this->_stu_finder->Set_SchoolId(temp);
			return i;
			}
		}
		//�����ݿ���д��
		bool write(){
			//�������ݿ�
			String^Connectfig="Host = localhost;Username = "+sqlusn+";Password = "+sqlpsw+" ;";
			MySqlConnection^users_edit=gcnew MySqlConnection(Connectfig);
			try{
				users_edit->Open();}
			catch(Exception^e){
				MessageBox::Show("���ݿ�����ʧ��"+e->ToString());
				return 0;
			}
			//���ݿ�cmdָ��
			MySqlCommand ^cmd = users_edit->CreateCommand();//�������������װ��Ҫ�����ݿ�ִ�е���䣩
			cmd->CommandText = "SELECT * FROM scut_helper.Card";//����sql�ı�
			//���ݿ�Dateset
			DataTable^_users=gcnew DataTable();
			//�Ž����ݿ⣬�������
			MySqlDataAdapter^adapter=gcnew MySqlDataAdapter(cmd);
			try{
				adapter->Fill(_users);
			}
			catch(Exception^e){
				MessageBox::Show("���ݿ��ȡʧ��"+e->ToString());
				return 0;
			}
			//��������µ�һ��
			DataRow^ newrow=_users->NewRow();
			newrow["_Master"]=this->master;
			newrow["_Finder"]=this->finder;
			newrow["_Date"]=this->curdate;
			newrow["_isget"]="0";
			_users->Rows->Add(newrow);
			//ͬ�����ݿ�
			try{
				MySqlCommandBuilder^bu=gcnew MySqlCommandBuilder(adapter);
				adapter->Update(_users->GetChanges());
			}
			catch(Exception^e){
				MessageBox::Show(e->ToString());
				return 0;
			}
			return 1;
		}
		//��ȡ���ݿ���˶�����Ϣ
		String^ readmaster(){
			//�������ݿ�
			String^Connectfig="Host = localhost;Username = "+sqlusn+";Password = "+sqlpsw+" ;";
			MySqlConnection^users_edit=gcnew MySqlConnection(Connectfig);
			try{
				users_edit->Open();}
			catch(Exception^e){
				MessageBox::Show("���ݿ�����ʧ��"+e->ToString());
				return "N";
			}
			//���ݿ�cmdָ��
			MySqlCommand ^cmd = users_edit->CreateCommand();//�������������װ��Ҫ�����ݿ�ִ�е���䣩
			cmd->CommandText = "SELECT * FROM scut_helper.Card";//����sql�ı�
			//���ݿ�Dateset
			DataTable^_users=gcnew DataTable();
			//�Ž����ݿ⣬�������
			MySqlDataAdapter^adapter=gcnew MySqlDataAdapter(cmd);
			try{
				adapter->Fill(_users);
			}
			catch(Exception^e){
				MessageBox::Show("���ݿ��ȡʧ��"+e->ToString());
				return "N";
			}
			String^ ans="N";
			for each(DataRow^row in _users->Rows){ //��ȡSQL�еĶ�Ӧ��Ϣ 
			if(row["_Master"]->ToString()->Equals(this->master)&&row["_isget"]->ToString()->Equals("0")){
					this->curdate=row["_Date"]->ToString();
					this->finder=row["_Finder"]->ToString();
					ans=this->code();
					break;
				}
			}
			return ans;
		}
		//��ȡ���ݿ�ȫ��������Ϣ
		static String^ readall(){
			//�������ݿ�
			String^Connectfig="Host = localhost;Username = "+sqlusn+";Password = "+sqlpsw+" ;";
			MySqlConnection^users_edit=gcnew MySqlConnection(Connectfig);
			try{
				users_edit->Open();}
			catch(Exception^e){
				MessageBox::Show("���ݿ�����ʧ��"+e->ToString());
				return "N";
			}
			//���ݿ�cmdָ��
			MySqlCommand ^cmd = users_edit->CreateCommand();//�������������װ��Ҫ�����ݿ�ִ�е���䣩
			cmd->CommandText = "SELECT * FROM scut_helper.Card";//����sql�ı�
			//���ݿ�Dateset
			DataTable^_users=gcnew DataTable();
			//�Ž����ݿ⣬�������
			MySqlDataAdapter^adapter=gcnew MySqlDataAdapter(cmd);
			try{
				adapter->Fill(_users);
			}
			catch(Exception^e){
				MessageBox::Show("���ݿ��ȡʧ��"+e->ToString());
				return "N";
			}
			String^ ans="";
			for each(DataRow^row in _users->Rows){ //��ȡSQL�еĶ�Ӧ��Ϣ 
					card ^ thi=gcnew card;
					thi->master=row["_Master"]->ToString();
					thi->curdate=row["_Date"]->ToString();
					thi->finder=row["_Finder"]->ToString();
					ans+=thi->code();
			}
			return ans;
		}
		String^ getcard(){
			//�������ݿ�
			String^Connectfig="Host = localhost;Username = "+sqlusn+";Password = "+sqlpsw+" ;";
			MySqlConnection^users_edit=gcnew MySqlConnection(Connectfig);
			try{
				users_edit->Open();}
			catch(Exception^e){
				MessageBox::Show("���ݿ�����ʧ��"+e->ToString());
				return "N";
			}
			//���ݿ�cmdָ��
			MySqlCommand ^cmd = users_edit->CreateCommand();//�������������װ��Ҫ�����ݿ�ִ�е���䣩
			cmd->CommandText = "SELECT * FROM scut_helper.Card";//����sql�ı�
			//���ݿ�Dateset
			DataTable^_users=gcnew DataTable();
			//�Ž����ݿ⣬�������
			MySqlDataAdapter^adapter=gcnew MySqlDataAdapter(cmd);
			try{
				adapter->Fill(_users);
			}
			catch(Exception^e){
				MessageBox::Show("���ݿ��ȡʧ��"+e->ToString());
			}
			//������Ϣ
			bool has=0;
			for each(DataRow^row in _users->Rows){ //��ȡSQL�еĶ�Ӧ��Ϣ 
				if(row["_Master"]->ToString()->Equals(this->master)){
					if(row["_isget"]->ToString()->Contains("1"))
						continue;
					row["_isget"]="1";
					has=1;
					break;
				}
			}
			//ͬ�����ݿ�
			try{
				MySqlCommandBuilder^bu=gcnew MySqlCommandBuilder(adapter);
				adapter->Update(_users->GetChanges());
			}
			catch(Exception^e){
				//MessageBox::Show(e->ToString());
				return "N";
			}
			return has?"Y":"N";
		}
	};
}