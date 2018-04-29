#ifndef CBUYER_H
#define CBUYER_H


#pragma once
#include "CEmployee.h"
#include<iostream>
#include <stdlib.h>
using namespace std;

class CBuyer :public CEmployee
{
public:
	CBuyer(int salary,int decreasenum);
	~CBuyer();
	int salary();
protected:
	int m_iDcreasenum;		//采购中降低的成本
};

#endif