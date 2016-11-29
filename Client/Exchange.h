namespace Exchange{
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
	//���ֽ�����
	ref class trade{
	public:
		String ^ user;
		String ^ thing;
		String ^ describe;
		String ^ date;
		String ^ price;
		String ^ kind;
	public:
		//���õ�ǰʱ��
		void setcurdate(){
			date=(String::Format("{0:G}",DateTime::Now));
		}
		//��ʼ����Ϣ
		void setuser(String^in){
			this->user=in;
		}
		void setthing(String^in){
			this->thing=in;
		}
		void setdescribe(String^in){
			this->describe=in;
		}
		void setprice(String^in){
			this->price=in;
		}
		void setkind(String^in){
			this->kind=in;
		}
		//����
		//�����������
		String ^ code(){
			String ^ temp="";
			temp="$"+user+"$"+
				thing+"$"+
				describe+"$"+
				price+"$"+
				kind+"$"+
				date+"$";
			return temp;
		}
		//����Ƭ�����
		int decode(String^out){
			int i=1;
			String^temp="";
			if(out->Length>0&&out[0]=='$'){
				//------------------------------
				//�û�
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->user=temp;
				//------------------------------
				//��Ʒ
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->thing=temp;
				//------------------------------
				//����
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->describe=temp;
				//------------------------------
				//�۸�
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->price=temp;
				//------------------------------
				//����
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->kind=temp;
				//------------------------------
				//����
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->date=temp;
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
			cmd->CommandText = "SELECT * FROM scut_helper.trade";//����sql�ı�
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
			newrow["_user"]=this->user;
			newrow["_thing"]=this->thing;
			newrow["_describe"]=this->describe;
			newrow["_date"]=this->date;
			newrow["_price"]=this->price;
			newrow["_kind"]=this->kind;
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
		//��ȡ���ݿ�ȫ�����ֽ�����Ϣ
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
			cmd->CommandText = "SELECT * FROM scut_helper.trade";//����sql�ı�
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
				trade ^ thi=gcnew trade;
				thi->user=row["_user"]->ToString();
				thi->thing=row["_thing"]->ToString();
				thi->describe=row["_describe"]->ToString();
				thi->date=row["_date"]->ToString();
				thi->price=row["_price"]->ToString();
				thi->kind=row["_kind"]->ToString();

				ans+=thi->code();
			}
			return ans;
		}
		
	}; 
}