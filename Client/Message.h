namespace User{
	//ʹ�õ����ռ�
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Net;
	using namespace System::Net::Sockets;
	using namespace System::Text;
	using namespace System::Threading;
	using namespace MySql::Data::MySqlClient;
	//�û���Ϣ�ķ�װ
	ref class message abstract{
	public:
		String ^ time;
		String ^ sendmessage;
		String ^ to;
		//����Ϊ��ǰʱ��
		void settime(){
			time=(String::Format("{0:G}",DateTime::Now));
		}

	};
	ref class _chat_message: message{
	public:

		String ^ from;
		String ^ kind;
		//���캯��
		_chat_message(){
			kind="chat";
		}


	};
	ref class _news_message: message{
	public:

		String ^ from;
		String ^ kind;
		//���캯��
		_news_message(){
			kind="news";
		}


	};

	ref class _chat_message_do:_chat_message { //������� 
	public:
		//����Ϣ�����
		String ^ code(){
			String ^ temp="";
			temp="$"+time+"$"+
				from+"$"+
				to+"$"+
				sendmessage+"$"+
				kind+"$";
			return temp;
		}

		//����Ϣ�����
		void decode(String^out){
			int i=1;
			String^temp="";
			if(out->Length>0&&out[0]=='$'){
				//------------------------------
				//ʱ��
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->time=temp;
				//------------------------------
				//���ͷ�
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->from=temp;
				//------------------------------
				//���շ�
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->to=temp;
				//------------------------------
				//��Ϣ����
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->sendmessage=temp;
				//-------------------------------
				//��Ϣ���
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->kind=temp;
			}
		}

		//������Ϣ����
		void setmessage(String^_from,String^_to,String^msg){
			this->sendmessage=msg;
			this->from=_from;
			this->to=_to;
		}
		//д�����ݿ�
		Boolean write(){
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
			cmd->CommandText = "SELECT * FROM scut_helper.message";//����sql�ı�
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
			//��������µ�һ��
			try{
				DataRow^ newrow=_users->NewRow();
				newrow["_Time"]=this->time;
				newrow["_isreceived"]="0";
				newrow["_From"]=this->from;
				newrow["_To"]=this->to;
				newrow["_Message"]=this->sendmessage;
				newrow["_kind"]=this->kind;
				_users->Rows->Add(newrow);
			}
			catch(Exception^e){
				//MessageBox::Show(e->ToString());
				return 0;
			}
			//ͬ�����ݿ�
			try{
				MySqlCommandBuilder^bu=gcnew MySqlCommandBuilder(adapter);
				adapter->Update(_users->GetChanges());
			}
			catch(Exception^e){
				//MessageBox::Show(e->ToString());
				return 0;
			}
			return 1;
		}
		//��ȡ���ݿ�,��ɹ�������Ϣ����ʧ�ܷ��ء�N��
		String^ read(String ^ user){
			//�������ݿ�
			String^Connectfig="Host = localhost;Username = "+sqlusn+";Password = "+sqlpsw+" ;";
			MySqlConnection^users_edit=gcnew MySqlConnection(Connectfig);
			try{
				users_edit->Open();}
			catch(Exception^e){
				MessageBox::Show("���ݿ�����ʧ��"+e->ToString());
			}
			//���ݿ�cmdָ��
			MySqlCommand ^cmd = users_edit->CreateCommand();//�������������װ��Ҫ�����ݿ�ִ�е���䣩
			cmd->CommandText = "SELECT * FROM scut_helper.message";//����sql�ı�
			//���ݿ�Dateset
			DataTable^admin_users=gcnew DataTable();
			//�Ž����ݿ⣬�������
			MySqlDataAdapter^adapter=gcnew MySqlDataAdapter(cmd);
			try{
				adapter->Fill(admin_users);
			}
			catch(Exception^e){
				MessageBox::Show("���ݿ��ȡʧ��"+e->ToString());
			}
			//�����û��յ�����Ϣ
			String^ ans="N";
			for each(DataRow^row in admin_users->Rows){ //��ȡSQL�еĶ�Ӧ��Ϣ 
				if(row["_To"]->ToString()->Equals(user)&&row["_isreceived"]->ToString()->Equals("0")&&row["_kind"]->ToString()->Equals("chat")){
					row["_isreceived"]=1;
					this->time=row["_Time"]->ToString();
					this->setmessage(row["_From"]->ToString(),
						row["_To"]->ToString(),
						row["_Message"]->ToString());
					this->kind=row["_kind"]->ToString();
					ans=this->code();
					break;
				}
			}
			//���ؽ��

			try{
				MySqlCommandBuilder^bu=gcnew MySqlCommandBuilder(adapter);
				adapter->Update(admin_users->GetChanges());
			}
			catch(Exception^e){
				//MessageBox::Show(e->ToString());
			}
			users_edit->Close();
			return ans;
		}

	};
	ref class _news_message_do:_news_message { //������� 
	public:
		//����Ϣ�����
		String ^ code(){
			String ^ temp="";
			temp="$"+time+"$"+
				from+"$"+
				to+"$"+
				sendmessage+"$"+
				kind+"$";
			return temp;
		}

		//����Ϣ�����
		void decode(String^out){
			int i=1;
			String^temp="";
			if(out->Length>0&&out[0]=='$'){
				//------------------------------
				//ʱ��
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->time=temp;
				//------------------------------
				//���ͷ�
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->from=temp;
				//------------------------------
				//���շ�
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->to=temp;
				//------------------------------
				//��Ϣ����
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->sendmessage=temp;
				//-------------------------------
				//��Ϣ���
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->kind=temp;
			}
		}

		//������Ϣ����
		void setmessage(String^_from,String^_to,String^msg){
			this->sendmessage=msg;
			this->from=_from;
			this->to=_to;
		}
		//д�����ݿ�
		Boolean write(){
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
			cmd->CommandText = "SELECT * FROM scut_helper.message";//����sql�ı�
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
			//��������µ�һ��
			try{
				DataRow^ newrow=_users->NewRow();
				newrow["_Time"]=this->time;
				newrow["_isreceived"]="0";
				newrow["_From"]=this->from;
				newrow["_To"]=this->to;
				newrow["_Message"]=this->sendmessage;
				newrow["_kind"]=this->kind;
				_users->Rows->Add(newrow);
			}
			catch(Exception^e){
				//MessageBox::Show(e->ToString());
				return 0;
			}
			//ͬ�����ݿ�
			try{
				MySqlCommandBuilder^bu=gcnew MySqlCommandBuilder(adapter);
				adapter->Update(_users->GetChanges());
			}
			catch(Exception^e){
				//MessageBox::Show(e->ToString());
				return 0;
			}
			return 1;
		}
		//��ȡ���ݿ�,��ɹ�������Ϣ����ʧ�ܷ��ء�N��
		String^ read(String ^ user){
			//�������ݿ�
			String^Connectfig="Host = localhost;Username = "+sqlusn+";Password = "+sqlpsw+" ;";
			MySqlConnection^users_edit=gcnew MySqlConnection(Connectfig);
			try{
				users_edit->Open();}
			catch(Exception^e){
				MessageBox::Show("���ݿ�����ʧ��"+e->ToString());
			}
			//���ݿ�cmdָ��
			MySqlCommand ^cmd = users_edit->CreateCommand();//�������������װ��Ҫ�����ݿ�ִ�е���䣩
			cmd->CommandText = "SELECT * FROM scut_helper.message";//����sql�ı�
			//���ݿ�Dateset
			DataTable^admin_users=gcnew DataTable();
			//�Ž����ݿ⣬�������
			MySqlDataAdapter^adapter=gcnew MySqlDataAdapter(cmd);
			try{
				adapter->Fill(admin_users);
			}
			catch(Exception^e){
				MessageBox::Show("���ݿ��ȡʧ��"+e->ToString());
			}
			//�����û��յ�����Ϣ
			String^ ans="N";
			for each(DataRow^row in admin_users->Rows){ //��ȡSQL�еĶ�Ӧ��Ϣ 
				if(row["_To"]->ToString()->Equals(user)&&row["_isreceived"]->ToString()->Equals("0")&&row["_kind"]->ToString()->Equals("news")){
					row["_isreceived"]=1;
					this->time=row["_Time"]->ToString();
					this->setmessage(row["_From"]->ToString(),
						row["_To"]->ToString(),
						row["_Message"]->ToString());
					ans=this->code();
					break;
				}
			}
			//���ؽ��

			try{
				MySqlCommandBuilder^bu=gcnew MySqlCommandBuilder(adapter);
				adapter->Update(admin_users->GetChanges());
			}
			catch(Exception^e){
				//MessageBox::Show(e->ToString());
			}
			users_edit->Close();
			return ans;
		}

	};
}
