namespace Exchange{
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
	//二手交易类
	ref class trade{
	public:
		String ^ user;
		String ^ thing;
		String ^ describe;
		String ^ date;
		String ^ price;
		String ^ kind;
	public:
		//设置当前时间
		void setcurdate(){
			date=(String::Format("{0:G}",DateTime::Now));
		}
		//初始化信息
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
		//编码
		//将交易类编码
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
		//将卡片类解码
		int decode(String^out){
			int i=1;
			String^temp="";
			if(out->Length>0&&out[0]=='$'){
				//------------------------------
				//用户
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->user=temp;
				//------------------------------
				//物品
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->thing=temp;
				//------------------------------
				//描述
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->describe=temp;
				//------------------------------
				//价格
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->price=temp;
				//------------------------------
				//种类
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->kind=temp;
				//------------------------------
				//日期
				temp="";
				while(out[i]!='$')
					temp+=out[i++];
				i++;
				this->date=temp;
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
			cmd->CommandText = "SELECT * FROM scut_helper.trade";//设置sql文本
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
			newrow["_user"]=this->user;
			newrow["_thing"]=this->thing;
			newrow["_describe"]=this->describe;
			newrow["_date"]=this->date;
			newrow["_price"]=this->price;
			newrow["_kind"]=this->kind;
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
		//获取数据库全部二手交易信息
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
			cmd->CommandText = "SELECT * FROM scut_helper.trade";//设置sql文本
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