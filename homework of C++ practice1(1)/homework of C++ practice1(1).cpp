// homework of C++ practice1(1).cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
using namespace std;


int main()
{
	char X;
	cout << "please enter " << endl;
	cin >> X;
	if (X == 'Y')
	{
		cout << "现在正在下雨" << endl;
	}
	else if (X == 'N')
	{
		cout << "现在没有下雨" << endl;
	}
	system("pause");
    return 0;
}

