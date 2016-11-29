#include <stdafx.h>
#include "RegisterForm.h"
using namespace Client;
using namespace Scut_helper_Scoket;
//--------------------------------
//屏幕效果
void RegisterForm::slow_show(){
	/*double a=0.0;
	for(int i=0;i<5000;i++){
		a+=0.0002;
		this->Opacity = a;
		this->Show();
	}*/
	this->Opacity = 100;
	this->Show();
}
void RegisterForm::slow_close(){
	/*double a=1;
	for(int i=0;i<5000;i++){
		a-=0.0002;
		this->Opacity = a;
		this->Show();
	}*/
	this->Opacity = 0;
	this->Show();
}
//--------------------------------
//控件事件
Void RegisterForm::RegisterForm_Load(System::Object^  sender, System::EventArgs^  e) {
	ThreadStart ^startRead=gcnew ThreadStart(this,&RegisterForm::slow_show);
	flash=gcnew Thread(startRead);
	flash->Start();

	tb_StudentID->Text="[作为登陆账号的学号]";
	tb_Password->Text="[不得含有空格、'$'符]";
	tb_Passwordcon->Text="[请保持与密码一致]";
	cb_Academy->Text="计算机科学与工程学院";
	cb_Major->Text="未选";
	cb_Grade->Text="大一";

	Newman=gcnew _student_do;
}
Void RegisterForm::cancel_Click(System::Object^  sender, System::EventArgs^  e) {
	slow_close();
	Close();
}
Void RegisterForm::bt_Hide_Click(System::Object^  sender, System::EventArgs^  e) {
	this -> WindowState = Windows::Forms::FormWindowState::Minimized;
}
Void RegisterForm::tb_StudentID_Enter(System::Object^  sender, System::EventArgs^  e) {
	if(tb_StudentID->Text->Equals("[作为登陆账号的学号]")) tb_StudentID->Text="";
}
Void RegisterForm::tb_Password_Enter(System::Object^  sender, System::EventArgs^  e) {
	tb_Password->Text="";
	this->tb_Password->PasswordChar = '*';
}
Void RegisterForm::tb_Passwordcon_Enter(System::Object^  sender, System::EventArgs^  e) {
	tb_Passwordcon->Text="";
	this->tb_Passwordcon->PasswordChar = '*';
}
Void RegisterForm::tb_StudentID_Leave(System::Object^  sender, System::EventArgs^  e) {
	String ^temp=gcnew String(tb_StudentID->Text);
	if(temp->Equals("")){
		tb_StudentID->Text="[作为登陆账号的学号]";
	}
	else if(temp->Length!=12||isnotInteger(temp))
		this->errorProvider1->SetError(tb_StudentID,"非学号");
	else this->errorProvider1->SetError(tb_StudentID,"");
}
Void RegisterForm::tb_Password_Leave(System::Object^  sender, System::EventArgs^  e) {
	String ^temp=gcnew String(tb_Password->Text);
	if(temp->Equals("")){
		this->errorProvider1->SetError(tb_Password,"请完成输入");
		return;
	}
	else if(temp->Contains("$")||temp->Contains(" "))
		this->errorProvider1->SetError(tb_Password,"密码非法");
	else this->errorProvider1->SetError(tb_Password,"");
}
Void RegisterForm::tb_Passwordcon_Leave(System::Object^  sender, System::EventArgs^  e) {
	String ^temp=gcnew String(tb_Passwordcon->Text);
	if(temp->Equals("")){
		return;
	}
	else if(!temp->Equals(tb_Password->Text))
		this->errorProvider1->SetError(tb_Passwordcon,"两次输入不一致");
	else this->errorProvider1->SetError(tb_Passwordcon,"");
}
Void RegisterForm::tb_Telephone_Leave(System::Object^  sender, System::EventArgs^  e){
	String ^temp=gcnew String(tb_Telephone->Text);
	if(temp->Length!=11||isnotInteger(temp))
		this->errorProvider1->SetError(tb_Telephone,"请输入正确手机号");
	else this->errorProvider1->SetError(tb_Telephone,"");
}
Void RegisterForm::rb_Isman_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if(rb_Isman->Checked) Usersex="男";
}
Void RegisterForm::rb_Isfeman_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if(rb_Isfeman->Checked) Usersex="女";
}
Void RegisterForm::cb_Academy_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e){
	if (cb_Academy->Text->Equals("计算机科学与工程学院"))
	{
		cb_Major->Items->Clear();
		this->cb_Major->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"计算机科学与技术", L"网络工程", L"信息安全"});
	}
	else if (cb_Academy->Text->Equals("机械与汽车工程学院"))
	{
		cb_Major->Items->Clear();
		this->cb_Major->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"机械工程及自动化", L"机械电子工程", L"过程装备与控制工程", L"安全工程", L"材料成型及控制工程", 
			L"车辆工程", L"热能与动力工程"});
	}
	else if (cb_Academy->Text->Equals("建筑学院"))
	{
		cb_Major->Items->Clear();
		this->cb_Major->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"建筑学", L"城乡规划学", L"风景园林学"});
	}
	else if (cb_Academy->Text->Equals("土木与交通学院"))
	{
		cb_Major->Items->Clear();
		this->cb_Major->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
			L"土木工程", L"交通运输工程系", L"工程力学", L"船舶与海洋工程", L"水利水电工程", L"工程管理"});
	}
	else if (cb_Academy->Text->Equals("电子与信息学院"))
	{
		cb_Major->Items->Clear();
		this->cb_Major->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
			L"通信工程", L"信息工程", L"工程力学", L"电子工程", L"光电工程", L"微波工程"});
	}
	else if (cb_Academy->Text->Equals("材料科学与工程学院"))
	{

	}
	else if (cb_Academy->Text->Equals("化学与化工学院"))
	{

	}
	else if (cb_Academy->Text->Equals("轻工科学与工程学院"))
	{

	}
	else if (cb_Academy->Text->Equals("食品科学与工程学院"))
	{

	}
	else if (cb_Academy->Text->Equals("数学学院"))
	{

	}
	else if (cb_Academy->Text->Equals("物理与光电学院"))
	{

	}
	else if (cb_Academy->Text->Equals("经济与贸易学院"))
	{

	}
	else if (cb_Academy->Text->Equals("自动化科学与工程学院"))
	{

	}
	else if (cb_Academy->Text->Equals("电力学院"))
	{

	}
	else if (cb_Academy->Text->Equals("生物科学与工程学院"))
	{

	}
	else if (cb_Academy->Text->Equals("环境与能源学院"))
	{

	}
	else if (cb_Academy->Text->Equals("软件学院"))
	{

	}
	else if (cb_Academy->Text->Equals("工商管理学院（创业教育学院"))
	{

	}
	else if (cb_Academy->Text->Equals("公共管理学院"))
	{

	}
	else if (cb_Academy->Text->Equals("马克思主义学院"))
	{

	}
	else if (cb_Academy->Text->Equals("外国语学院"))
	{

	}
	else if (cb_Academy->Text->Equals("法学院（知识产权学院）"))
	{

	}
	else if (cb_Academy->Text->Equals("新闻与传播学院"))
	{

	}
	else if (cb_Academy->Text->Equals("艺术学院"))
	{

	}
	else if (cb_Academy->Text->Equals("体育学院"))
	{

	}
	else if (cb_Academy->Text->Equals("设计学院"))
	{

	}
	else if (cb_Academy->Text->Equals("医学院"))
	{

	}
	else if (cb_Academy->Text->Equals("国际教育学院"))
	{

	}
}
Void RegisterForm::comfirm_Click(System::Object^  sender, System::EventArgs^  e) {
	//简单操作数据
	DateTime^BD=Birthday_Select->Value.Date;
	DateTime^Sign_time=DateTime::Now;
	//初始化本地的一个User实例
	Newman->Set_SchoolId(tb_StudentID->Text);
	Newman->Set_Password(tb_Password->Text);
	Newman->Set_Name(tb_Password->Text);
	Newman->Set_Sex(Usersex);
	Newman->Set_Academy(cb_Academy->Text);
	Newman->Set_Grade(cb_Grade->Text);
	Newman->Set_Major(cb_Major->Text);
	Newman->Set_BirthDate(BD->ToShortDateString());
	Newman->Set_QQnum(tb_QQ->Text);
	Newman->Set_Phonenum(tb_Telephone->Text);
	Newman->Set_Signature(tb_Signture->Text);
	Newman->Set_RegistDate(String::Format("{0:d}",Sign_time));
	//处理用户输入的信息
	if(Check()){
		String ^Sentmsg =gcnew String("");
		Sentmsg=
			"$"+tb_StudentID->Text+
			"$"+tb_Password->Text+
			"$"+tb_Username->Text+
			"$"+Usersex+
			"$"+cb_Academy->Text+
			"$"+cb_Grade->Text+
			"$"+cb_Major->Text+
			"$"+tb_Telephone->Text+
			"$"+BD->ToShortDateString()+
			"$"+tb_QQ->Text+
			"$"+tb_Signture->Text+
			"$"+Sign_time->ToString()+
			"$";
		//使用已封装的Socket方法发送编码好的信息
		ClientDo ^Sent=gcnew ClientDo();
		Sent->op_Setport(4870);
		Sent->op_Connect_Server();
		Sent->op_Send(Sentmsg);
		String^Response=Sent->op_Receive();
		//MessageBox::Show(Response);
		if(Response->Contains("Y")||Response[0]=='\0'){
			Sent->op_Shutdown_Server();
			MessageBox::Show("注册成功");
			slow_close();
			Close();
		}
		else MessageBox::Show("注册失败");
	}
	else MessageBox::Show("请您确认已完整输入信息！","注册信息不完整",MessageBoxButtons::OK);
}
//-----------------------
//附加函数
bool RegisterForm::isnotInteger(String ^value) {
	try {
		Int64::Parse(value);
		return 0;
	} catch (Exception ^) {
		return 1;
	}
}
bool RegisterForm::Check(){
	if(!(tb_StudentID->Equals(""))&&!(tb_Password->Equals(""))&&!(tb_Passwordcon->Equals(""))){
		if (tb_Username->Text->Equals("")||Usersex->Equals("未选")||tb_Telephone->Text->Equals("")||tb_Telephone->Text->Length!=11||isnotInteger(tb_Telephone->Text))
			return false;
		else return true;
	}
	else return false;
}