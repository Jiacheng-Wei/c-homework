#pragma once
#include<iostream>
using namespace std;

class NStr
{
public:
	NStr(void);
	NStr(char *s);
	NStr(const NStr&);//拷贝构造函数
	~NStr(void);//析构函数
	const NStr  operator +(const NStr &);//重载加法
	friend ostream & operator <<(ostream &, const NStr &);//重载输出流
	friend istream & operator >>(istream &, NStr &);//重载输入流
private:
	char * str;
	int	len;
};
