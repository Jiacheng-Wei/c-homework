#include "stdafx.h"
#include "CSalesman.h"

CSalesman::CSalesman(int salary,int salesnum)
{
	m_salary = salary;
	m_iSalesnum = salesnum;
}
CSalesman::~CSalesman()
{
	//cout << "~CSalesman()" << endl;
}
int CSalesman::salary()
{
	m_salary = 2000;
	m_salary = m_salary + m_iSalesnum / 20;
	return m_salary;
}