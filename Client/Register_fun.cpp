#include <stdafx.h>
#include "RegisterForm.h"
using namespace Client;
using namespace Scut_helper_Scoket;
//--------------------------------
//��ĻЧ��
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
//�ؼ��¼�
Void RegisterForm::RegisterForm_Load(System::Object^  sender, System::EventArgs^  e) {
	ThreadStart ^startRead=gcnew ThreadStart(this,&RegisterForm::slow_show);
	flash=gcnew Thread(startRead);
	flash->Start();

	tb_StudentID->Text="[��Ϊ��½�˺ŵ�ѧ��]";
	tb_Password->Text="[���ú��пո�'$'��]";
	tb_Passwordcon->Text="[�뱣��������һ��]";
	cb_Academy->Text="�������ѧ�빤��ѧԺ";
	cb_Major->Text="δѡ";
	cb_Grade->Text="��һ";

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
	if(tb_StudentID->Text->Equals("[��Ϊ��½�˺ŵ�ѧ��]")) tb_StudentID->Text="";
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
		tb_StudentID->Text="[��Ϊ��½�˺ŵ�ѧ��]";
	}
	else if(temp->Length!=12||isnotInteger(temp))
		this->errorProvider1->SetError(tb_StudentID,"��ѧ��");
	else this->errorProvider1->SetError(tb_StudentID,"");
}
Void RegisterForm::tb_Password_Leave(System::Object^  sender, System::EventArgs^  e) {
	String ^temp=gcnew String(tb_Password->Text);
	if(temp->Equals("")){
		this->errorProvider1->SetError(tb_Password,"���������");
		return;
	}
	else if(temp->Contains("$")||temp->Contains(" "))
		this->errorProvider1->SetError(tb_Password,"����Ƿ�");
	else this->errorProvider1->SetError(tb_Password,"");
}
Void RegisterForm::tb_Passwordcon_Leave(System::Object^  sender, System::EventArgs^  e) {
	String ^temp=gcnew String(tb_Passwordcon->Text);
	if(temp->Equals("")){
		return;
	}
	else if(!temp->Equals(tb_Password->Text))
		this->errorProvider1->SetError(tb_Passwordcon,"�������벻һ��");
	else this->errorProvider1->SetError(tb_Passwordcon,"");
}
Void RegisterForm::tb_Telephone_Leave(System::Object^  sender, System::EventArgs^  e){
	String ^temp=gcnew String(tb_Telephone->Text);
	if(temp->Length!=11||isnotInteger(temp))
		this->errorProvider1->SetError(tb_Telephone,"��������ȷ�ֻ���");
	else this->errorProvider1->SetError(tb_Telephone,"");
}
Void RegisterForm::rb_Isman_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if(rb_Isman->Checked) Usersex="��";
}
Void RegisterForm::rb_Isfeman_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if(rb_Isfeman->Checked) Usersex="Ů";
}
Void RegisterForm::cb_Academy_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e){
	if (cb_Academy->Text->Equals("�������ѧ�빤��ѧԺ"))
	{
		cb_Major->Items->Clear();
		this->cb_Major->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"�������ѧ�뼼��", L"���繤��", L"��Ϣ��ȫ"});
	}
	else if (cb_Academy->Text->Equals("��е����������ѧԺ"))
	{
		cb_Major->Items->Clear();
		this->cb_Major->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"��е���̼��Զ���", L"��е���ӹ���", L"����װ������ƹ���", L"��ȫ����", L"���ϳ��ͼ����ƹ���", 
			L"��������", L"�����붯������"});
	}
	else if (cb_Academy->Text->Equals("����ѧԺ"))
	{
		cb_Major->Items->Clear();
		this->cb_Major->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"����ѧ", L"����滮ѧ", L"�羰԰��ѧ"});
	}
	else if (cb_Academy->Text->Equals("��ľ�뽻ͨѧԺ"))
	{
		cb_Major->Items->Clear();
		this->cb_Major->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
			L"��ľ����", L"��ͨ���乤��ϵ", L"������ѧ", L"�����뺣�󹤳�", L"ˮ��ˮ�繤��", L"���̹���"});
	}
	else if (cb_Academy->Text->Equals("��������ϢѧԺ"))
	{
		cb_Major->Items->Clear();
		this->cb_Major->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
			L"ͨ�Ź���", L"��Ϣ����", L"������ѧ", L"���ӹ���", L"��繤��", L"΢������"});
	}
	else if (cb_Academy->Text->Equals("���Ͽ�ѧ�빤��ѧԺ"))
	{

	}
	else if (cb_Academy->Text->Equals("��ѧ�뻯��ѧԺ"))
	{

	}
	else if (cb_Academy->Text->Equals("�Ṥ��ѧ�빤��ѧԺ"))
	{

	}
	else if (cb_Academy->Text->Equals("ʳƷ��ѧ�빤��ѧԺ"))
	{

	}
	else if (cb_Academy->Text->Equals("��ѧѧԺ"))
	{

	}
	else if (cb_Academy->Text->Equals("��������ѧԺ"))
	{

	}
	else if (cb_Academy->Text->Equals("������ó��ѧԺ"))
	{

	}
	else if (cb_Academy->Text->Equals("�Զ�����ѧ�빤��ѧԺ"))
	{

	}
	else if (cb_Academy->Text->Equals("����ѧԺ"))
	{

	}
	else if (cb_Academy->Text->Equals("�����ѧ�빤��ѧԺ"))
	{

	}
	else if (cb_Academy->Text->Equals("��������ԴѧԺ"))
	{

	}
	else if (cb_Academy->Text->Equals("���ѧԺ"))
	{

	}
	else if (cb_Academy->Text->Equals("���̹���ѧԺ����ҵ����ѧԺ"))
	{

	}
	else if (cb_Academy->Text->Equals("��������ѧԺ"))
	{

	}
	else if (cb_Academy->Text->Equals("���˼����ѧԺ"))
	{

	}
	else if (cb_Academy->Text->Equals("�����ѧԺ"))
	{

	}
	else if (cb_Academy->Text->Equals("��ѧԺ��֪ʶ��ȨѧԺ��"))
	{

	}
	else if (cb_Academy->Text->Equals("�����봫��ѧԺ"))
	{

	}
	else if (cb_Academy->Text->Equals("����ѧԺ"))
	{

	}
	else if (cb_Academy->Text->Equals("����ѧԺ"))
	{

	}
	else if (cb_Academy->Text->Equals("���ѧԺ"))
	{

	}
	else if (cb_Academy->Text->Equals("ҽѧԺ"))
	{

	}
	else if (cb_Academy->Text->Equals("���ʽ���ѧԺ"))
	{

	}
}
Void RegisterForm::comfirm_Click(System::Object^  sender, System::EventArgs^  e) {
	//�򵥲�������
	DateTime^BD=Birthday_Select->Value.Date;
	DateTime^Sign_time=DateTime::Now;
	//��ʼ�����ص�һ��Userʵ��
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
	//�����û��������Ϣ
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
		//ʹ���ѷ�װ��Socket�������ͱ���õ���Ϣ
		ClientDo ^Sent=gcnew ClientDo();
		Sent->op_Setport(4870);
		Sent->op_Connect_Server();
		Sent->op_Send(Sentmsg);
		String^Response=Sent->op_Receive();
		//MessageBox::Show(Response);
		if(Response->Contains("Y")||Response[0]=='\0'){
			Sent->op_Shutdown_Server();
			MessageBox::Show("ע��ɹ�");
			slow_close();
			Close();
		}
		else MessageBox::Show("ע��ʧ��");
	}
	else MessageBox::Show("����ȷ��������������Ϣ��","ע����Ϣ������",MessageBoxButtons::OK);
}
//-----------------------
//���Ӻ���
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
		if (tb_Username->Text->Equals("")||Usersex->Equals("δѡ")||tb_Telephone->Text->Equals("")||tb_Telephone->Text->Length!=11||isnotInteger(tb_Telephone->Text))
			return false;
		else return true;
	}
	else return false;
}