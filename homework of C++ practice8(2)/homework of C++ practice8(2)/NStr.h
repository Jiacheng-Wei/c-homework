#pragma once
#include<iostream>
using namespace std;

class NStr
{
public:
	NStr(void);
	NStr(char *s);
	NStr(const NStr&);//�������캯��
	~NStr(void);//��������
	const NStr  operator +(const NStr &);//���ؼӷ�
	friend ostream & operator <<(ostream &, const NStr &);//���������
	friend istream & operator >>(istream &, NStr &);//����������
private:
	char * str;
	int	len;
};
