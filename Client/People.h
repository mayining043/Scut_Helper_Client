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
	ref class people abstract{
	public:
		//校园编号
		void Set_SchoolId(String^in){
			this->_SchoolId=in;
		}
		String ^ get_SchoolId(){
			return this->_SchoolId;
		}
		//姓名
		void Set_Name(String^in){
			this->_Name=in;
		}
		String ^ get_Name(){
			return this->_Name;
		}
		//密码
		void Set_Password(String^in){
			this->_Password=in;
		}
		String ^ get_Password(){
			return this->_Password;
		}
		//性别
		void Set_Sex(String^in){
			this->_Sex=in;
		}
		String ^ get_Sex(){
			return this->_Sex;
		}
		//生日
		void Set_BirthDate(String^in){
			this->_BirthDate=in;
		}
		String ^ get_BirthDate(){
			return this->_BirthDate;
		}
		//电话
		void Set_Phonenum(String^in){
			this->_Phonenum=in;
		}
		String ^ get_Phonenum(){
			return this->_Phonenum;
		}
		//qq号
		void Set_QQnum(String^in){
			this->_QQnum=in;
		}
		String ^ get_QQnum(){
			return this->_QQnum;
		}
		//邮箱
		void Set_Email(String^in){
			this->_Email=in;
		}
		String ^ get_Email(){
			return this->_Email;
		}
		//个性签名
		void Set_Signature(String^in){
			this->_Signature=in;
		}
		String ^ get_Signature(){
			return this->_Signature;
		}
		//个人头像
		void Set_photo(String^in){
			this->_photo=in;
		}
		String ^ get_photo(){
			return this->_photo;
		}
		//注册时间
		void Set_RegistDate(String^in){
			this->_RegistDate=in;
		}
		String ^ get_RegistDate(){
			return this->_RegistDate;
		}
		//编码学号
		String^ code_ID(){
			return "$"+get_SchoolId()+"$";
		}
		//解码学号
		String^ decode_ID(String ^ ins){
			return ins->Substring(1,ins->Length-1);
		}

		//服务器登陆SQL查询
		virtual bool checklogin(){return 0;}
		//解码类
		virtual void decode(String^out){}
		//编码类
		virtual String^ code(){return "N";}


		//SQL查找用户资料
		virtual String ^ _SearchPeople(){return "N";}
		//SQL语句用于修改用户信息
		virtual Boolean^_changePeople(String^in){return false;}
		//SQL语句用于删除用户
		virtual Boolean^_deletePeople(){return false;}

	private:
		String ^ _SchoolId;
		String ^ _Name;
		String ^ _Password;
		String ^ _Sex;
		String ^ _BirthDate;
		String ^ _Phonenum;
		String ^ _QQnum;
		String ^ _Email;
		String ^ _Signature;
		String ^ _photo;
		String ^ _RegistDate;
	};
}

namespace User{
	//继承用户类，封装学生信息
	ref class student: people{
	public:
		//学院信息
		void Set_Academy(String^in){
			this->_Academy=in;
		}
		String ^ get_Academy(){
			return this->_Academy;
		}
		//专业信息
		void Set_Major(String^in){
			this->_Major=in;
		}
		String ^ get_Major(){
			return this->_Major;
		}
		//班级信息
		void Set_Class(String^in){
			this->_Class=in;
		}
		String ^ get_Class(){
			return this->_Class;
		}
		//年级信息
		void Set_Grade(String^in){
			this->_Grade=in;
		}
		String ^ get_Grade(){
			return this->_Grade;
		}

	private:
		String ^ _Academy;
		String ^ _Major;
		String ^ _Class;
		String ^ _Grade;
	};
}

namespace User{
	//继承学生类，实现学生信息操作
	ref class _student_do: student{
	public:
		//服务器登陆SQL查询
		virtual bool checklogin() override{
			String^usn=this->get_SchoolId();
			String^psw=this->get_Password();
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
			cmd->CommandText = "SELECT * FROM scut_helper.people";//设置sql文本
			//数据库Dateset
			DataTable^admin_users=gcnew DataTable();
			//桥接数据库，填充数据
			try{
				MySqlDataAdapter^adapter=gcnew MySqlDataAdapter(cmd);
				adapter->Fill(admin_users);
			}
			catch(Exception^e){
				MessageBox::Show("数据库获取失败"+e->ToString());
			}
			//查找验证
			Boolean has=0;
			for each(DataRow^row in admin_users->Rows){
				if(row["_SchoolId"]->ToString()->Equals(usn)&&row["_Password"]->ToString()->Equals(psw))
					has=1;
			}
			//返回结果
			users_edit->Close();
			return has?1:0;
		}


		//服务器注册SQL语句
		Boolean regist(){
			String^usn=this->get_SchoolId();
			String^psw=this->get_Password();
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
			cmd->CommandText = "SELECT * FROM scut_helper.people";//设置sql文本
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
			//查找用户编号id
			Int32 has=0;
			for each(DataRow^row in _users->Rows){
				String^ num=row["_userId"]->ToString();
				Int32 temp=Int32::Parse(num);
				if(temp>=has)
					has=temp;
			}
			//本地添加新的一行
			DataRow^ newrow=_users->NewRow();
			newrow["_userId"]=++has;
			newrow["_SchoolId"]=this->get_SchoolId();
			newrow["_Name"]=this->get_Name();
			newrow["_Password"]=this->get_Password();
			newrow["_Sex"]=this->get_Sex();
			newrow["_BirthDate"]=this->get_BirthDate();
			newrow["_Phonenum"]=this->get_Phonenum();
			newrow["_QQnum"]=this->get_QQnum();
			newrow["_Email"]=this->get_Email();
			newrow["_Signature"]=this->get_Signature();
			newrow["_photo"]=this->get_photo();
			newrow["_Academy"]=this->get_Academy();
			newrow["_Major"]=this->get_Major();
			newrow["_Class"]=this->get_Class();
			newrow["_Grade"]=this->get_Grade();
			newrow["_RegistDate"]=this->get_RegistDate();
			newrow["_Status"]="学生";
			_users->Rows->Add(newrow);
			//同步数据库
			try{
				MySqlCommandBuilder^bu=gcnew MySqlCommandBuilder(adapter);
				adapter->Update(_users->GetChanges());
			}
			catch(Exception^){
				//MessageBox::Show(e->ToString());
				return 0;
			}
			return 1;
		}


		//解码学生类
		virtual void decode(String^out)override{
			String^temp="";
			int i=1;
			//------------------------------
			//校园卡号
			temp="";
			while(out[i]!='$')
				temp+=out[i++];
			i++;
			this->Set_SchoolId(temp);
			//------------------------------
			//密码
			temp="";
			while(out[i]!='$')
				temp+=out[i++];
			i++;
			this->Set_Password(temp);
			//------------------------------
			//姓名
			temp="";
			while(out[i]!='$')
				temp+=out[i++];
			i++;
			this->Set_Name(temp);
			//------------------------------
			//性别
			temp="";
			while(out[i]!='$')
				temp+=out[i++];
			i++;
			this->Set_Sex(temp);
			//------------------------------
			//学院
			temp="";
			while(out[i]!='$')
				temp+=out[i++];
			i++;
			this->Set_Academy(temp);
			//------------------------------
			//年级
			temp="";
			while(out[i]!='$')
				temp+=out[i++];
			i++;
			this->Set_Grade(temp);
			//------------------------------
			//专业
			temp="";
			while(out[i]!='$')
				temp+=out[i++];
			i++;
			this->Set_Major(temp);
			//------------------------------
			//电话
			temp="";
			while(out[i]!='$')
				temp+=out[i++];
			i++;
			this->Set_Phonenum(temp);
			//------------------------------
			//生日
			temp="";
			while(out[i]!='$')
				temp+=out[i++];
			i++;
			this->Set_BirthDate(temp);
			//------------------------------
			//QQ
			temp="";
			while(out[i]!='$')
				temp+=out[i++];
			i++;
			this->Set_QQnum(temp);
			//------------------------------
			//个性签名
			temp="";
			while(out[i]!='$')
				temp+=out[i++];
			i++;
			this->Set_Signature(temp);
			//------------------------------
			//注册时间
			temp="";
			while(out[i]!='$')
				temp+=out[i++];
			i++;
			this->Set_RegistDate(temp);
			//------------------------------
			//班级
			temp="";
			while(out[i]!='$')
				temp+=out[i++];
			i++;
			this->Set_Class(temp);
		}


		//编码学生类
		virtual String^ code()override{
			String^temp="";
			temp+="$"+
				this->get_SchoolId()+"$"+
				this->get_Password()+"$"+
				this->get_Name()+"$"+
				this->get_Sex()+"$"+
				this->get_Academy()+"$"+
				this->get_Grade()+"$"+
				this->get_Major()+"$"+
				this->get_Phonenum()+"$"+
				this->get_BirthDate()+"$"+
				this->get_QQnum()+"$"+
				this->get_Signature()+"$"+
				this->get_RegistDate()+"$"+
				this->get_Class()+"$";
			return temp;
		}


		//SQL语句用于查找用户资料
		virtual String ^ _SearchPeople()override{
			String^usn=this->get_SchoolId();
			String^psw=this->get_Password();
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
			cmd->CommandText = "SELECT * FROM scut_helper.people";//设置sql文本
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
			//查找用户编号id
			Boolean has=0;
			for each(DataRow^row in _users->Rows){
				String^ id=row["_SchoolId"]->ToString();
				if(id->Equals(this->get_SchoolId())){
					has=1;
					this->Set_SchoolId(row["_SchoolId"]->ToString());
					this->Set_Name(row["_Name"]->ToString());
					this->Set_Password(row["_Password"]->ToString());
					this->Set_Sex(row["_Sex"]->ToString());
					this->Set_BirthDate(row["_BirthDate"]->ToString());
					this->Set_Phonenum(row["_Phonenum"]->ToString());
					this->Set_QQnum(row["_QQnum"]->ToString());
					this->Set_Email(row["_Email"]->ToString());
					this->Set_Signature(row["_Signature"]->ToString());
					this->Set_photo(row["_photo"]->ToString());
					this->Set_Academy(row["_Academy"]->ToString());
					this->Set_Major(row["_Major"]->ToString());
					this->Set_Class(row["_Class"]->ToString());
					this->Set_Grade(row["_Grade"]->ToString());
					this->Set_RegistDate(row["_RegistDate"]->ToString());
					break;
				}
			}
			if(has)
				return this->code();
			else
				return "N";
		}


		//SQL语句用于修改用户信息
		virtual Boolean^_changePeople(String^in)override{
			_student_do^ stud=gcnew _student_do;
			stud->decode(in);
			return stud->_deletePeople()&&stud->regist();
		}


		//SQL语句用于删除用户信息
		virtual Boolean^_deletePeople()override{
			String^usn=this->get_SchoolId();
			//连接数据库
			String^Connectfig="Host = localhost;Username = "+sqlusn+";Password = "+sqlpsw+" ;";
			MySqlConnection^users_edit=gcnew MySqlConnection(Connectfig);
			try{
				users_edit->Open();}
			catch(Exception^e){
				MessageBox::Show("数据库连接失败"+e->ToString());
				return false;
			}
			//数据库cmd指令
			MySqlCommand ^cmd = users_edit->CreateCommand();//命令对象（用来封装需要在数据库执行的语句）
			cmd->CommandText = "SELECT * FROM scut_helper.people";//设置sql文本
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
			//查找要删除的
			Boolean has=0;
			for each(DataRow^row in _users->Rows){
				if(row["_SchoolId"]->ToString()->Equals(this->get_SchoolId())){
					has=1;
					row->Delete();
					break;
				}
			}
			//同步数据库
			try{
				MySqlCommandBuilder^bu=gcnew MySqlCommandBuilder(adapter);
				adapter->Update(_users->GetChanges());
			}
			catch(Exception^){
				//MessageBox::Show(e->ToString());
				return false;
			}
			return true;
			//返回结果
			users_edit->Close();
			return true;
		}
	};
}

namespace User{
	//继承接口的学生类，实现老师的信息操作
	ref class teacher: student{
	public:
		String^ admin_name;
		String^ admin_password;
		//--------------------------
		void set_name(String^in){
			this->admin_name=in;
		}
		String^ get_name(){
			return this->admin_name;
		}
		//-----------------------------
		void set_password(String^in){
			this->admin_password=in;
		}
		String^ get_password(){
			return this->admin_password;
		}
		//------------------------------
	};
}

namespace User{
	//继承接口的学生类，实现老师的信息操作
	ref class _teacher_do: teacher{
	public:
		//登陆
		virtual bool checklogin() override{
			String^usn=this->get_name();
			String^psw=this->get_password();
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
			cmd->CommandText = "SELECT * FROM scut_helper.admin_users";//设置sql文本
			//数据库Dateset
			DataTable^admin_users=gcnew DataTable();
			//桥接数据库，填充数据
			try{
				MySqlDataAdapter^adapter=gcnew MySqlDataAdapter(cmd);
				adapter->Fill(admin_users);
			}
			catch(Exception^e){
				MessageBox::Show("数据库获取失败"+e->ToString());
			}
			//查找验证
			Boolean has=0;
			for each(DataRow^row in admin_users->Rows){
				if(row["admin_name"]->ToString()->Equals(usn)&&row["admin_password"]->ToString()->Equals(psw))
					has=1;
			}
			//返回结果
			users_edit->Close();
			return has?1:0;
		}

		//解码学生类
		int newdecode(String^out){
			String^temp="";
			int i=1;
			//------------------------------
			//校园卡号
			temp="";
			while(out[i]!='$')
				temp+=out[i++];
			i++;
			this->Set_SchoolId(temp);
			//------------------------------
			//密码
			temp="";
			while(out[i]!='$')
				temp+=out[i++];
			i++;
			this->Set_Password(temp);
			//------------------------------
			//姓名
			temp="";
			while(out[i]!='$')
				temp+=out[i++];
			i++;
			this->Set_Name(temp);
			//------------------------------
			//性别
			temp="";
			while(out[i]!='$')
				temp+=out[i++];
			i++;
			this->Set_Sex(temp);
			//------------------------------
			//学院
			temp="";
			while(out[i]!='$')
				temp+=out[i++];
			i++;
			this->Set_Academy(temp);
			//------------------------------
			//年级
			temp="";
			while(out[i]!='$')
				temp+=out[i++];
			i++;
			this->Set_Grade(temp);
			//------------------------------
			//专业
			temp="";
			while(out[i]!='$')
				temp+=out[i++];
			i++;
			this->Set_Major(temp);
			//------------------------------
			//电话
			temp="";
			while(out[i]!='$')
				temp+=out[i++];
			i++;
			this->Set_Phonenum(temp);
			//------------------------------
			//生日
			temp="";
			while(out[i]!='$')
				temp+=out[i++];
			i++;
			this->Set_BirthDate(temp);
			//------------------------------
			//QQ
			temp="";
			while(out[i]!='$')
				temp+=out[i++];
			i++;
			this->Set_QQnum(temp);
			//------------------------------
			//个性签名
			temp="";
			while(out[i]!='$')
				temp+=out[i++];
			i++;
			this->Set_Signature(temp);
			//------------------------------
			//注册时间
			temp="";
			while(out[i]!='$')
				temp+=out[i++];
			i++;
			this->Set_RegistDate(temp);
			//------------------------------
			//班级
			temp="";
			while(out[i]!='$')
				temp+=out[i++];
			i++;
			this->Set_Class(temp);
			return i;
		}


		//编码学生类
		virtual String^ code()override{
			String^temp="";
			temp+="$"+
				this->get_SchoolId()+"$"+
				this->get_Password()+"$"+
				this->get_Name()+"$"+
				this->get_Sex()+"$"+
				this->get_Academy()+"$"+
				this->get_Grade()+"$"+
				this->get_Major()+"$"+
				this->get_Phonenum()+"$"+
				this->get_BirthDate()+"$"+
				this->get_QQnum()+"$"+
				this->get_Signature()+"$"+
				this->get_RegistDate()+"$"+
				this->get_Class()+"$";
			return temp;
		}
		//SQL语句用于修改用户信息
		virtual Boolean^_changePeople(String^in)override{
			_student_do^ stud=gcnew _student_do;
			stud->decode(in);
			return stud->_deletePeople()&&stud->regist();
		}


		//SQL语句用于删除用户信息
		virtual Boolean^_deletePeople()override{
			String^usn=this->get_SchoolId();
			//连接数据库
			String^Connectfig="Host = localhost;Username = "+sqlusn+";Password = "+sqlpsw+" ;";
			MySqlConnection^users_edit=gcnew MySqlConnection(Connectfig);
			try{
				users_edit->Open();}
			catch(Exception^e){
				MessageBox::Show("数据库连接失败"+e->ToString());
				return false;
			}
			//数据库cmd指令
			MySqlCommand ^cmd = users_edit->CreateCommand();//命令对象（用来封装需要在数据库执行的语句）
			cmd->CommandText = "SELECT * FROM scut_helper.people";//设置sql文本
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
			//查找要删除的
			Boolean has=0;
			for each(DataRow^row in _users->Rows){
				if(row["_SchoolId"]->ToString()->Equals(this->get_SchoolId())){
					has=1;
					row->Delete();
					break;
				}
			}
			//同步数据库
			try{
				MySqlCommandBuilder^bu=gcnew MySqlCommandBuilder(adapter);
				adapter->Update(_users->GetChanges());
			}
			catch(Exception^){
				//MessageBox::Show(e->ToString());
				return false;
			}
			return true;
			//返回结果
			users_edit->Close();
			return true;
		}

		//返回所有人信息
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
			cmd->CommandText = "SELECT * FROM scut_helper.people";//设置sql文本
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
				_student_do ^ thi=gcnew _student_do;
				thi->Set_SchoolId(row["_SchoolId"]->ToString());
				thi->Set_Name(row["_Name"]->ToString());
				thi->Set_Password(row["_Password"]->ToString());
				thi->Set_Sex(row["_Sex"]->ToString());
				thi->Set_BirthDate(row["_BirthDate"]->ToString());
				thi->Set_Phonenum(row["_Phonenum"]->ToString());
				thi->Set_QQnum(row["_QQnum"]->ToString());
				thi->Set_Email(row["_Email"]->ToString());
				thi->Set_Signature(row["_Signature"]->ToString());
				thi->Set_photo(row["_photo"]->ToString());
				thi->Set_Academy(row["_Academy"]->ToString());
				thi->Set_Major(row["_Major"]->ToString());
				thi->Set_Class(row["_Class"]->ToString());
				thi->Set_Grade(row["_Grade"]->ToString());
				thi->Set_RegistDate(row["_RegistDate"]->ToString());
				ans+=thi->code();
			}
			return ans;
		}
	};
}