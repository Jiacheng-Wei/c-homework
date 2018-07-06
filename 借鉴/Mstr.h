#include<iostream>

using namespace std;

class MStr

{

public:

	MStr(void);

	~MStr(void);//析构函数

	MStr(char *);

	MStr(const MStr&);//复制构造函数

	const MStr  operator +(const MStr &);//重载加法

	friend ostream & operator <<(ostream &, const MStr &);//重载输出流

	friend istream & operator >>(istream &, MStr &);//重载输入流

private:

	char * str;

	int	len;

}; 

#pragma once
