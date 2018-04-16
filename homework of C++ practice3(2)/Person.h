#ifndef PERSON_H
#define PERSON_H
#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class Person
{
public:
	Person();
	Person(string _name, int _age, string _sex, string _address, string _phonenum, int _salary);
	~Person();
	void show();
protected:
	string m_strname;
	int m_iage;
	string m_strsex;
	string m_straddress;
	string m_strphonenum;
	int m_isalary;
};

#endif