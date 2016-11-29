namespace Card{
	//使用的名空间
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
	//一卡通功能
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
		//通过学号获取详细信息
		bool getpeople(){
			ClientDo ^Sent=gcnew ClientDo;
			//获取卡片方
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
			//获取捡卡方
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
		//设置卡片信息
		void setmsg(String^ t1,String^ t2){
			this->master=t1;
			this->finder=t2;
			_stu_master->Set_SchoolId(t1);
			_stu_finder->Set_SchoolId(t2);
			setcurdate();
		}
		//设置当前时间
		void setcurdate(){
			curdate=(String::Format("{0:G}",DateTime::Now));
		}
		//将卡片类编码
		String ^ code(){
			String ^ temp="";
			temp="$"+curdate+"$"+
				master+"$"+
				finder+"$";
			return temp;
		}

		//将卡片类解码
		int decode(String^out){
			int i=1;
			String^temp="";
			if(out->Length>0&&out[0]=='$'){
				//------------------------------
				//时间
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->curdate=temp;
				//------------------------------
				//卡主
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->master=temp;
				this->_stu_master->Set_SchoolId(temp);
				//------------------------------
				//捡卡方
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->finder=temp;
				this->_stu_finder->Set_SchoolId(temp);
			return i;
			}
		}
		//向数据库中写入
		bool write(){
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
			cmd->CommandText = "SELECT * FROM scut_helper.Card";//设置sql文本
			//数据库Dateset
			DataTable^_users=gcnew DataTable();
			//桥接数据库，填充数据
			MySqlDataAdapter^adapter=gcnew MySqlDataAdapter(cmd);
			try{
				adapter->Fill(_users);
			}
			catch(Exception^e){
				MessageBox::Show("数据库获取失败"+e->ToString());
				return 0;
			}
			//本地添加新的一行
			DataRow^ newrow=_users->NewRow();
			newrow["_Master"]=this->master;
			newrow["_Finder"]=this->finder;
			newrow["_Date"]=this->curdate;
			newrow["_isget"]="0";
			_users->Rows->Add(newrow);
			//同步数据库
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
		//获取数据库个人丢卡信息
		String^ readmaster(){
			//连接数据库
			String^Connectfig="Host = localhost;Username = "+sqlusn+";Password = "+sqlpsw+" ;";
			MySqlConnection^users_edit=gcnew MySqlConnection(Connectfig);
			try{
				users_edit->Open();}
			catch(Exception^e){
				MessageBox::Show("数据库连接失败"+e->ToString());
				return "N";
			}
			//数据库cmd指令
			MySqlCommand ^cmd = users_edit->CreateCommand();//命令对象（用来封装需要在数据库执行的语句）
			cmd->CommandText = "SELECT * FROM scut_helper.Card";//设置sql文本
			//数据库Dateset
			DataTable^_users=gcnew DataTable();
			//桥接数据库，填充数据
			MySqlDataAdapter^adapter=gcnew MySqlDataAdapter(cmd);
			try{
				adapter->Fill(_users);
			}
			catch(Exception^e){
				MessageBox::Show("数据库获取失败"+e->ToString());
				return "N";
			}
			String^ ans="N";
			for each(DataRow^row in _users->Rows){ //获取SQL中的对应消息 
			if(row["_Master"]->ToString()->Equals(this->master)&&row["_isget"]->ToString()->Equals("0")){
					this->curdate=row["_Date"]->ToString();
					this->finder=row["_Finder"]->ToString();
					ans=this->code();
					break;
				}
			}
			return ans;
		}
		//获取数据库全部丢卡信息
		static String^ readall(){
			//连接数据库
			String^Connectfig="Host = localhost;Username = "+sqlusn+";Password = "+sqlpsw+" ;";
			MySqlConnection^users_edit=gcnew MySqlConnection(Connectfig);
			try{
				users_edit->Open();}
			catch(Exception^e){
				MessageBox::Show("数据库连接失败"+e->ToString());
				return "N";
			}
			//数据库cmd指令
			MySqlCommand ^cmd = users_edit->CreateCommand();//命令对象（用来封装需要在数据库执行的语句）
			cmd->CommandText = "SELECT * FROM scut_helper.Card";//设置sql文本
			//数据库Dateset
			DataTable^_users=gcnew DataTable();
			//桥接数据库，填充数据
			MySqlDataAdapter^adapter=gcnew MySqlDataAdapter(cmd);
			try{
				adapter->Fill(_users);
			}
			catch(Exception^e){
				MessageBox::Show("数据库获取失败"+e->ToString());
				return "N";
			}
			String^ ans="";
			for each(DataRow^row in _users->Rows){ //获取SQL中的对应消息 
					card ^ thi=gcnew card;
					thi->master=row["_Master"]->ToString();
					thi->curdate=row["_Date"]->ToString();
					thi->finder=row["_Finder"]->ToString();
					ans+=thi->code();
			}
			return ans;
		}
		String^ getcard(){
			//连接数据库
			String^Connectfig="Host = localhost;Username = "+sqlusn+";Password = "+sqlpsw+" ;";
			MySqlConnection^users_edit=gcnew MySqlConnection(Connectfig);
			try{
				users_edit->Open();}
			catch(Exception^e){
				MessageBox::Show("数据库连接失败"+e->ToString());
				return "N";
			}
			//数据库cmd指令
			MySqlCommand ^cmd = users_edit->CreateCommand();//命令对象（用来封装需要在数据库执行的语句）
			cmd->CommandText = "SELECT * FROM scut_helper.Card";//设置sql文本
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
			//查找信息
			bool has=0;
			for each(DataRow^row in _users->Rows){ //获取SQL中的对应消息 
				if(row["_Master"]->ToString()->Equals(this->master)){
					if(row["_isget"]->ToString()->Contains("1"))
						continue;
					row["_isget"]="1";
					has=1;
					break;
				}
			}
			//同步数据库
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