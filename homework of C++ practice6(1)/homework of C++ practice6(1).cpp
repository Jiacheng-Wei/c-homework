// homework of C++ practice6(1).cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<functional>

using namespace std;
class Complex {
public:
	int real, //实数部分
		virt;//虚数部分

	Complex operator+(Complex com) {
		Complex temp;
		temp.real = this->real + com.real;
		temp.virt = this->virt + com.virt;
		return temp;
	}

};
int main() {
	plus<int> ComplexAdd;
	Complex com1, com2;
	cout << "输入第一个复数的实部及虚部：" << endl;
	cin >> com1.real >> com1.virt;
	cout << "输入第二个复数的实部及虚部：" << endl;
	cin >> com2.real >> com2.virt;
	cout << "(" << com1.real << "+" << com1.virt << "i)" << " + " << "(" << com2.real << "+" << com2.virt << "i) = " << "(" << ComplexAdd(com1.real, com2.real) << "+"
		<< ComplexAdd(com1.virt, com2.virt) << "i)" << endl;
	system("pause");
	return 0;
}

