// homework of C++ practice4(1).cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "CBuyer.h"
#include "CEmployee.h"
#include "CDeskman.h"
#include "CSalesman.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	CEmployee oCE;
	CBuyer oCB(2000,2000);
	CDeskman oCD(2000,64);
	CSalesman oCS(2000,2000);

	cout << "\n 1：-通过基类的引用调用虚函数具有特性-----。" << endl;
	CEmployee *poCE;
	poCE = &oCE;
	cout<<poCE->salary()<<endl;
	poCE = &oCB;
	cout<<poCE->salary()<<endl;
	poCE = &oCD;
	cout<<poCE->salary()<<endl;
	poCE = &oCS;
	cout<<poCE->salary()<<endl;

	cout << "\n 1：-通过基类的引用调用虚函数具有特性-----。" << endl;
	cout<<oCE.salary()<<endl;
	cout<<oCB.salary()<<endl;
	cout<<oCD.salary()<<endl;
	cout<<oCS.salary()<<endl;
	
	system("pause");
	return 0;
}

