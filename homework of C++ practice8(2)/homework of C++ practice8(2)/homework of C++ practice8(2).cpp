// homework of C++ practice8(2).cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include"NStr.h"
using namespace std;

int main()
{
	char s1[] = "love";
	char s2[] = "IMooc";
	NStr str1(s1), str2(s2);
	cout << str1 << endl;
	cout << NStr(str2) << endl;
	cout << str1 + str2 << endl;
	system("pause");
	return 0;
}