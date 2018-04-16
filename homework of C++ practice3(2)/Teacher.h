#ifndef TEACHER_H
#define TEACHER_H
#pragma once
#include "Person.h"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class Teacher :virtual public Person
{
public:
	Teacher();
	Teacher(string _name, int _age, string _sex, string _address, string _phonenum, int _salary,string _PrefessionalTitle);
	~Teacher();
	void show();
protected:
	string m_strPrefessionalTitle;
};


#endif
