// homework of C++ practice7(1).cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;


int main()
{
	int Engletters=0;
	fstream testFile("textfiletest.txt",ios::in);
	if (testFile.fail())
	{
		cout << "fail to open the text" << endl;
		system("pause");
		exit(0);
	}
	char ch;
	ch = testFile.get();
	while (!testFile.eof())
	{
		if ((ch <= 'z'&&ch >= 'a') || (ch <= 'Z'&&ch >= 'A'))
		{
			Engletters++;
		}
		ch = testFile.get();
	}
	testFile.close();
	cout << "the english letters has occured " << Engletters << " times" << endl;
	system("pause");
    return 0;
}

