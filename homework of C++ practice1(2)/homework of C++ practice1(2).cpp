// homework of C++ practice1(2).cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
using namespace std;


int main()
{
	cout << "你考试考了多少分？（0~100）" << endl;
	double X;
	cin >> X;
	if (X >= 90 && X <= 100)
	{
		cout << "优" << endl;
	}
	else if (X >= 80 && X < 90)
	{
		cout << "良" << endl;
	}
	else if (X >= 60 && X < 80)
	{
		cout << "中" << endl;
	}
	else if (X >= 0 && X < 60)
	{
		cout << "差" << endl;
	}
	system("pause");
    return 0;
}

