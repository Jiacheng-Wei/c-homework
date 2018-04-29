#ifndef CSTUDENT_H
#define CSTUDENT_H

#pragma once
#include "CPerson.h"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class CStudent:public CPerson
{
public:
	CStudent(int age, string name,string grade);
	~CStudent();
	void show(int age) const;
protected:
	string m_grade;
};

#endif