 // homework of C++ practice5(2).cpp: 定义控制台应用程序的入口点。


#include "stdafx.h"
#include "MaxorMin.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	MaxorMin <double> mm1;
	mm1.Getarr();
	cout << mm1.GetMax() << endl;
	cout << mm1.GetMin() << endl;

	MaxorMin <int> mm2;
	mm2.Getarr();
	cout << mm2.GetMax() << endl;
	cout << mm2.GetMin() << endl;

	MaxorMin <string> mm3;
	mm3.Getarr();
	cout << mm3.GetMax() << endl;
	cout << mm3.GetMin() << endl;
	
	system("pause");
    return 0;
}

