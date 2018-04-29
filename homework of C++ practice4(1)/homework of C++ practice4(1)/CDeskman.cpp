#include "stdafx.h"
#include "CDeskman.h"

CDeskman::CDeskman(int salary,int time)
{
	m_salary = salary;
	m_iTime = time;
}
CDeskman::~CDeskman()
{
	//cout << "~CDeskman()" << endl;
}
int CDeskman::salary()
{
	m_salary = 2000;
	int n;
	n = m_iTime / 8;
	m_salary = m_salary + 8 * n;
	return m_salary;
}