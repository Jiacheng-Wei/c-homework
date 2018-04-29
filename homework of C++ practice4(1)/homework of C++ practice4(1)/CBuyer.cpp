#include "stdafx.h"
#include "CBuyer.h"

CBuyer::CBuyer(int salary,int decreasenum)
{
	m_salary = salary;
	m_iDcreasenum = decreasenum;
}
CBuyer::~CBuyer()
{
	//cout << "~CBuyer()" << endl;
}
int CBuyer::salary()
{
	m_salary = 2000;
	int n;
	n = m_iDcreasenum / 100;
	m_salary = m_salary + 10 * n;
	return m_salary;
}