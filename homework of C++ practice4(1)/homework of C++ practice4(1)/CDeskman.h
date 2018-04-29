#ifndef CDESKMAN_H
#define CDESKMAN_H


#pragma once
#include "CEmployee.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

class CDeskman:public CEmployee
{
public:
	CDeskman(int salary,int time);
	~CDeskman();
	int salary();
protected:
	int m_iTime;		//在办公室工作时间
};

#endif