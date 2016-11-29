namespace User{
	//使用的名空间
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
	//用户信息的封装
	ref class message abstract{
	public:
		String ^ time;
		String ^ sendmessage;
		String ^ to;
		//设置为当前时间
		void settime(){
			time=(String::Format("{0:G}",DateTime::Now));
		}

	};
	ref class _chat_message: message{
	public:

		String ^ from;
		String ^ kind;
		//构造函数
		_chat_message(){
			kind="chat";
		}


	};
	ref class _news_message: message{
	public:

		String ^ from;
		String ^ kind;
		//构造函数
		_news_message(){
			kind="news";
		}


	};

	ref class _chat_message_do:_chat_message { //对象入口 
	public:
		//将消息类编码
		String ^ code(){
			String ^ temp="";
			temp="$"+time+"$"+
				from+"$"+
				to+"$"+
				sendmessage+"$"+
				kind+"$";
			return temp;
		}

		//将消息类解码
		void decode(String^out){
			int i=1;
			String^temp="";
			if(out->Length>0&&out[0]=='$'){
				//------------------------------
				//时间
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->time=temp;
				//------------------------------
				//发送方
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->from=temp;
				//------------------------------
				//接收方
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->to=temp;
				//------------------------------
				//消息内容
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->sendmessage=temp;
				//-------------------------------
				//消息类别
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->kind=temp;
			}
		}

		//设置消息内容
		void setmessage(String^_from,String^_to,String^msg){
			this->sendmessage=msg;
			this->from=_from;
			this->to=_to;
		}
		//写入数据库
		Boolean write(){
			//连接数据库
			String^Connectfig="Host = localhost;Username = "+sqlusn+";Password = "+sqlpsw+" ;";
			MySqlConnection^users_edit=gcnew MySqlConnection(Connectfig);
			try{
				users_edit->Open();}
			catch(Exception^e){
				MessageBox::Show("数据库连接失败"+e->ToString());
				return 0;
			}
			//数据库cmd指令
			MySqlCommand ^cmd = users_edit->CreateCommand();//命令对象（用来封装需要在数据库执行的语句）
			cmd->CommandText = "SELECT * FROM scut_helper.message";//设置sql文本
			//数据库Dateset
			DataTable^_users=gcnew DataTable();
			//桥接数据库，填充数据
			MySqlDataAdapter^adapter=gcnew MySqlDataAdapter(cmd);
			try{
				adapter->Fill(_users);
			}
			catch(Exception^e){
				MessageBox::Show("数据库获取失败"+e->ToString());
			}
			//本地添加新的一行
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
			//同步数据库
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
		//读取数据库,如成功返回消息，如失败返回“N”
		String^ read(String ^ user){
			//连接数据库
			String^Connectfig="Host = localhost;Username = "+sqlusn+";Password = "+sqlpsw+" ;";
			MySqlConnection^users_edit=gcnew MySqlConnection(Connectfig);
			try{
				users_edit->Open();}
			catch(Exception^e){
				MessageBox::Show("数据库连接失败"+e->ToString());
			}
			//数据库cmd指令
			MySqlCommand ^cmd = users_edit->CreateCommand();//命令对象（用来封装需要在数据库执行的语句）
			cmd->CommandText = "SELECT * FROM scut_helper.message";//设置sql文本
			//数据库Dateset
			DataTable^admin_users=gcnew DataTable();
			//桥接数据库，填充数据
			MySqlDataAdapter^adapter=gcnew MySqlDataAdapter(cmd);
			try{
				adapter->Fill(admin_users);
			}
			catch(Exception^e){
				MessageBox::Show("数据库获取失败"+e->ToString());
			}
			//查找用户收到的信息
			String^ ans="N";
			for each(DataRow^row in admin_users->Rows){ //获取SQL中的对应消息 
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
			//返回结果

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
	ref class _news_message_do:_news_message { //对象入口 
	public:
		//将消息类编码
		String ^ code(){
			String ^ temp="";
			temp="$"+time+"$"+
				from+"$"+
				to+"$"+
				sendmessage+"$"+
				kind+"$";
			return temp;
		}

		//将消息类解码
		void decode(String^out){
			int i=1;
			String^temp="";
			if(out->Length>0&&out[0]=='$'){
				//------------------------------
				//时间
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->time=temp;
				//------------------------------
				//发送方
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->from=temp;
				//------------------------------
				//接收方
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->to=temp;
				//------------------------------
				//消息内容
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->sendmessage=temp;
				//-------------------------------
				//消息类别
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->kind=temp;
			}
		}

		//设置消息内容
		void setmessage(String^_from,String^_to,String^msg){
			this->sendmessage=msg;
			this->from=_from;
			this->to=_to;
		}
		//写入数据库
		Boolean write(){
			//连接数据库
			String^Connectfig="Host = localhost;Username = "+sqlusn+";Password = "+sqlpsw+" ;";
			MySqlConnection^users_edit=gcnew MySqlConnection(Connectfig);
			try{
				users_edit->Open();}
			catch(Exception^e){
				MessageBox::Show("数据库连接失败"+e->ToString());
				return 0;
			}
			//数据库cmd指令
			MySqlCommand ^cmd = users_edit->CreateCommand();//命令对象（用来封装需要在数据库执行的语句）
			cmd->CommandText = "SELECT * FROM scut_helper.message";//设置sql文本
			//数据库Dateset
			DataTable^_users=gcnew DataTable();
			//桥接数据库，填充数据
			MySqlDataAdapter^adapter=gcnew MySqlDataAdapter(cmd);
			try{
				adapter->Fill(_users);
			}
			catch(Exception^e){
				MessageBox::Show("数据库获取失败"+e->ToString());
			}
			//本地添加新的一行
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
			//同步数据库
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
		//读取数据库,如成功返回消息，如失败返回“N”
		String^ read(String ^ user){
			//连接数据库
			String^Connectfig="Host = localhost;Username = "+sqlusn+";Password = "+sqlpsw+" ;";
			MySqlConnection^users_edit=gcnew MySqlConnection(Connectfig);
			try{
				users_edit->Open();}
			catch(Exception^e){
				MessageBox::Show("数据库连接失败"+e->ToString());
			}
			//数据库cmd指令
			MySqlCommand ^cmd = users_edit->CreateCommand();//命令对象（用来封装需要在数据库执行的语句）
			cmd->CommandText = "SELECT * FROM scut_helper.message";//设置sql文本
			//数据库Dateset
			DataTable^admin_users=gcnew DataTable();
			//桥接数据库，填充数据
			MySqlDataAdapter^adapter=gcnew MySqlDataAdapter(cmd);
			try{
				adapter->Fill(admin_users);
			}
			catch(Exception^e){
				MessageBox::Show("数据库获取失败"+e->ToString());
			}
			//查找用户收到的信息
			String^ ans="N";
			for each(DataRow^row in admin_users->Rows){ //获取SQL中的对应消息 
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
			//返回结果

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
