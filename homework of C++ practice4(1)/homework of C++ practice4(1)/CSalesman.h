#ifndef CSALESMAN_H
#define CSALESMAN_H


#pragma once
#include "CEmployee.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

class CSalesman: public CEmployee
{
public:
	CSalesman(int salary,int salesnum);
	~CSalesman();
	int salary();
protected:
	//int m_salary;
	int m_iSalesnum;
};

#endif
