// homework of C++ practice6(2).cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<list>
#include<string>

using namespace std;

typedef list<int> Integerlist;

int main() {
	Integerlist integerlist;
	int a;

	cout << "输入十个整数：" << endl;


	for (int i = 0; i < 10; i++) {
		cin >> a;
		integerlist.push_front(a);
	}

	while (!integerlist.empty()) {
		cout << integerlist.front() << " ";
		integerlist.pop_front();
	}
	cout << endl;
	system("pause");
	return 0;
}
