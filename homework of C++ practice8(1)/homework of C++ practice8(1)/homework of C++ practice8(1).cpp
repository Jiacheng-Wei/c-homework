// homework of C++ practice8(1).cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<cstring>
using namespace std;

const char *StringCopy(const char *Src, char *Dest ) {
	int length = strlen(Src);
	strcpy_s(Dest, length + 1, Src);
	cout << "Dest = " << Dest << endl;
	return Src;
}

int main() {
	const char *demo;
	char a[] = "";
	char b[] = "helloworld";
	char *p1, *p2;
	p1 = a;
	p2 = b;
	demo = StringCopy(p2, p1);
	cout << "Src = " << demo << endl;
	system("pause");
	return 0;
}

