// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
#pragma once
//#define IP "125.216.245.7"
//#define IP "125.216.245.5"
#define IP "127.0.0.1"
//#define IP "119.29.118.241"
//#define IP "192.168.43.50"
//#define IP "127.0.0.1"
//全局参数命名
#define port "4869"
#define Loginportnum "4869"
#define Registerportnum "4870"
#define GetMessageportnum "4871"
#define SendMessageportnum "4872"
#define ChangePeopleportnum "4873"
#define sqlusn "root"
#define sqlpsw "894841535"

// 特定于项目的包含文件
#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <ctime>
#include <iomanip>
#include <fstream>

using namespace std;
using namespace System;
using namespace Runtime::InteropServices;
using namespace IO;

//类体系头文件
#include "People.h"
#include "Socket.h"
#include "Card.h"
#include "Message.h"
//#include "Message.h"

//窗体头文件
#include "LoginForm.h"
#include "SMainForm.h"
#include "TMainForm.h"
// TODO: 在此处引用程序需要的其他头文件

