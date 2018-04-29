#include "stdafx.h"
#include "CEmployee.h"

CEmployee::CEmployee()
{
	m_salary = 2000;
}
CEmployee::~CEmployee()
{
	//cout << "~CEmployee()" << endl;
}
int CEmployee::salary()
{
	return m_salary;
}