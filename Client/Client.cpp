// Client.cpp: 主项目文件。

#include "stdafx.h"


using namespace Client;
//特殊名空间使用
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
	// 在创建任何控件之前启用 Windows XP 可视化效果
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);


	// 创建主窗口并运行它
	Application::Run(gcnew LoginForm());
	if(logright==true){
		if(studentuser==true) Application::Run(gcnew SMainForm());
		else Application::Run(gcnew TMainForm());
	}
	return 0;
}
