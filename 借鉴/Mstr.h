#include<iostream>

using namespace std;

class MStr

{

public:

	MStr(void);

	~MStr(void);//��������

	MStr(char *);

	MStr(const MStr&);//���ƹ��캯��

	const MStr  operator +(const MStr &);//���ؼӷ�

	friend ostream & operator <<(ostream &, const MStr &);//���������

	friend istream & operator >>(istream &, MStr &);//����������

private:

	char * str;

	int	len;

}; 

#pragma once
