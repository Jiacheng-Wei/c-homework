// homework of C++ practice5(1).cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

template <class Type>
Type getMin(Type a, Type b)
{
	cout << "调用函数模板1：";
		return a > b ? b : a;
}

template <class Type1, class Type2>
Type1 getMin(Type1 a, Type2 b)
{
	cout << "调用函数模板2：";
	return a > b ? b : a;
}

template <class Type>
Type getMin(Type a, Type b, Type c)
{
	cout << "调用函数模板3：";
	Type min = a;
	min = a > b ? b : a;
	return min > c ? c: min;
}

template <class Type1,class Type2,class Type3>
Type1 getMin(Type1 a, Type2 b, Type3 c)
{
	cout << "调用函数模板4：";
	Type1 min = a;
	min = a > b ? b : a;
	return min > c ? c : min;
}

int main()
{
	cout << "		" << getMin(10, 20) << endl;
	cout << "		" << getMin('I', 'i') << endl;
	cout << "		" << getMin(1.0, 2.0) << endl;
	cout << "		" << getMin('a', 200) << endl;
	cout << "		" << getMin(10, 20.5) << endl;
	cout << "		" << getMin(10.5, 20) << endl;
	cout << "		" << getMin(10, 20L) << endl;
	cout << "		" << getMin(2L, 'A') << endl;
	cout << "		" << getMin(1.0, 20L) << endl;
	cout << "		" << getMin(10, 20,30) << endl;
	cout << "		" << getMin(10L, 20,30) << endl;
	cout << "		" << getMin(1.10, 2.0,4.6) << endl;
	cout << "		" << getMin(10, 20,'A') << endl;
	system("pause");
    return 0;
}

