// homework of C++ practice4(2).cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "CPerson.h"
#include "CStudent.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

void test(const CPerson &roCP)
{
	roCP.show();
	roCP.show(1);
}

int main()
{

	cout << "指针调用" << endl;
	CPerson *poCP;
	CStudent oCS(8, "Clinton", "Crade Two");
	poCP = &oCS;
	oCS.show(1);
	poCP->show();
	poCP->show(1);
	cout << "test的引用调用" << endl;
	test(oCS);

	system("pause");
	return 0;
}

