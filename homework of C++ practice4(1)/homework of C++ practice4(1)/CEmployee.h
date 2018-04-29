#ifndef CEMPLOYEE_H
#define CEMPLOYEE_H

#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;

class CEmployee
{
public:
	CEmployee();
	~CEmployee();
	virtual int salary();
protected:
	int m_salary;
};

#endif