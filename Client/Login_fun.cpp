#include "stdafx.h"
#include "LoginForm.h"
#include "RegisterForm.h"
using namespace Client;
using namespace Runtime::InteropServices;
//------------------------------
//控件事件
Void LoginForm::Quit_Click(System::Object^  sender, System::EventArgs^  e) {
	slow_close();
	Close();
}
Void LoginForm::Signin_Click(System::Object^  sender, System::EventArgs^  e){

	RegisterForm ^Usersign=gcnew RegisterForm;
	Usersign->Show();

}
Void LoginForm::LoginForm_Load(System::Object^  sender, System::EventArgs^  e) {
	IsStudent->Checked=true;
	toolTip1->SetToolTip(Signin,"新用户注册");
	ThreadStart^startRead=gcnew ThreadStart(this,&LoginForm::slow_show);
	flash=gcnew Thread(startRead);
	flash->Start();
}
Void LoginForm::Login_Click(System::Object^  sender, System::EventArgs^  e) {
	if (tb_id->Text->Equals("")||tb_Password->Text->Equals(""))
	{
		MessageBox::Show("【请确认已输入账号和密码】","输入不完整",MessageBoxButtons::OK,MessageBoxIcon::Error);
		return;
	}
	extern string ID;
	extern bool studentuser;
	idtemp=tb_id->Text->ToString();

    //将登陆信息保存在运行界面中
	char *chars=(char*)(Marshal::StringToHGlobalAnsi(tb_id->Text)).ToPointer();
	ID=chars;
	//
	String ^passtemp=tb_Password->Text->ToString();
	if(passtemp->Contains(" ")||passtemp->Contains("$")){
		MessageBox::Show("【请输入正确格式的密码】","密码有误",MessageBoxButtons::OK,MessageBoxIcon::Error);
		tb_Password->Text="";
		return;
	}
	progressBar1->Visible=true;
	Login_Send=gcnew String("$"+tb_id->Text+"$"+tb_Password->Text+"$");
	ThreadStart^startRead;
	if(studentuser) startRead=gcnew ThreadStart(this,&LoginForm::sendmessage_s);
	else startRead=gcnew ThreadStart(this,&LoginForm::sendmessage_t);

	loginThread=gcnew Thread(startRead);
	loginThread->Start();
}
Void LoginForm::IsStudent_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	extern bool studentuser;
	if (IsStudent->Checked) studentuser=true;
	else studentuser=false;
}
//-------------------------------------
//附加函数
//-------------------------------------
//学生登陆
void LoginForm::sendmessage_s(){
	progressBar1->Value=20;
	lb_work->Text="正在连接服务器...";
	String^out="N";
	Int32 portnum=Int32::Parse(port);
	IPAddress^localAddr=IPAddress::Parse(IP);	
	IPEndPoint^remoteEP=gcnew IPEndPoint(localAddr,portnum);
	socketAtClient=gcnew Socket(AddressFamily::InterNetwork,SocketType::Stream,ProtocolType::Tcp);//set connection
	progressBar1->Value=40;
	lb_work->Text="正在连接Socket...";
	try{
		socketAtClient->Connect(remoteEP);	//connect server
	}
	catch(Exception^){
		lb_work->Text="网路异常，请检查网络";
		progressBar1->Visible=false;
		return;
	}
	progressBar1->Value=60;
	lb_work->Text="正在向服务器发送请求...";
	try{
		array<Byte>^buffer=Encoding::UTF8->GetBytes(Login_Send);	
		socketAtClient->Send(buffer);
	}
	catch(Exception^){
		lb_work->Text="服务器未收到响应，请重试";
		progressBar1->Visible=false;
		return;
	}
	progressBar1->Value=80;
	lb_work->Text=" 正在等待验证结果...";
	try{
		array<Byte>^buffer2=gcnew array<Byte>(256);	//Receive buffer
		int byteCount=socketAtClient->Receive(buffer2);
		out=Encoding::UTF8->GetString(buffer2);	//encoding
	}
	catch(Exception^){
		lb_work->Text="未收到服务器回复，请重试";
		progressBar1->Visible=false;
	}
	progressBar1->Value=90;
	extern bool logright;
	if(out->Contains("Y")){
		Thread::Sleep(500);
		progressBar1->Value=100;
		lb_work->Text="        登陆成功！";
		logright=1;
		Thread::Sleep(1000);
		slow_close();
		this->Close();
	}
	else{
		Thread::Sleep(1000);
		progressBar1->Visible=false;
		tb_Password->Text = L"";
		lb_work->Text="用户名不存在或密码错误";
	}
}

//-------------------------------------
//老师登陆
void LoginForm::sendmessage_t(){
	progressBar1->Value=20;
	lb_work->Text="正在连接服务器...";
	String^out="N";
	Int32 portnum=4876;
	IPAddress^localAddr=IPAddress::Parse(IP);	
	IPEndPoint^remoteEP=gcnew IPEndPoint(localAddr,portnum);
	socketAtClient=gcnew Socket(AddressFamily::InterNetwork,SocketType::Stream,ProtocolType::Tcp);//set connection
	progressBar1->Value=40;
	lb_work->Text="正在连接Socket...";
	try{
		socketAtClient->Connect(remoteEP);	//connect server
	}
	catch(Exception^){
		lb_work->Text="网路异常，请检查网络";
		progressBar1->Visible=false;
		return;
	}
	progressBar1->Value=60;
	lb_work->Text="正在向服务器发送请求...";
	try{
		array<Byte>^buffer=Encoding::UTF8->GetBytes("L"+Login_Send);	
		socketAtClient->Send(buffer);
	}
	catch(Exception^){
		lb_work->Text="服务器未收到响应，请重试";
		progressBar1->Visible=false;
		return;
	}
	progressBar1->Value=80;
	lb_work->Text=" 正在等待验证结果...";
	try{
		array<Byte>^buffer2=gcnew array<Byte>(256);	//Receive buffer
		int byteCount=socketAtClient->Receive(buffer2);
		out=Encoding::UTF8->GetString(buffer2);	//encoding
	}
	catch(Exception^){
		lb_work->Text="未收到服务器回复，请重试";
		progressBar1->Visible=false;
	}
	progressBar1->Value=90;
	extern bool logright;
	if(out->Contains("Y")){
		Thread::Sleep(500);
		progressBar1->Value=100;
		lb_work->Text="        登陆成功！";
		logright=1;
		Thread::Sleep(1000);
		slow_close();
		this->Close();
	}
	else{
		Thread::Sleep(1000);
		progressBar1->Visible=false;
		tb_Password->Text = L"";
		lb_work->Text="用户名不存在或密码错误";
	}
}

void LoginForm::slow_show(){
	/*double a=0.0;
	for(int i=0;i<5000;i++){
		a+=0.0002;
		this->Opacity = a;
		this->Show();
	}*/
	this->Opacity = 100;
	this->Show();
} 
void LoginForm::slow_close(){
	/*double a=1;
	for(int i=0;i<5000;i++){
		a-=0.0002;
		this->Opacity = a;
		this->Show();
	}*/
	this->Opacity = 0;
	this->Show();
}
Void LoginForm::LoginForm_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	mypoint.X = e->X, mypoint.Y = e->Y;
}
Void LoginForm::LoginForm_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if( e->Button == System::Windows::Forms::MouseButtons::Left ){
		Point myposition = MousePosition;
		myposition.Offset( -mypoint.X, -mypoint.Y );
		this->Location = myposition;
	}
}
Void LoginForm::pictureBox1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	mypoint.X = e->X, mypoint.Y = e->Y;
}
Void LoginForm::pictureBox1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if( e->Button == System::Windows::Forms::MouseButtons::Left ){
		Point myposition = MousePosition;
		myposition.Offset( -mypoint.X, -mypoint.Y );
		this->Location = myposition;
	}
}