// Client.cpp: ����Ŀ�ļ���

#include "stdafx.h"


using namespace Client;
//�������ռ�ʹ��
using namespace std;
using namespace System;
using namespace Runtime::InteropServices;
using namespace IO;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	extern bool logright;
	extern bool studentuser;
	extern int ID;
	logright=false;
	studentuser=true;
	// �ڴ����κοؼ�֮ǰ���� Windows XP ���ӻ�Ч��
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);


	// ���������ڲ�������
	Application::Run(gcnew LoginForm());
	if(logright==true){
		if(studentuser==true) Application::Run(gcnew SMainForm());
		else Application::Run(gcnew TMainForm());
	}
	return 0;
}
