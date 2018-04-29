#include "stdafx.h"
#include "CPerson.h"

CPerson::CPerson(int age,string name):m_age(age),m_name(name){}
CPerson::~CPerson(){}
void CPerson::show(int age) const
{
	cout << "CPerson::show(int age):" << m_age << ",name" << m_name << "." << endl;
}
void CPerson::show() const
{
	cout << "CPerson::show(no age):" << "name:" << m_name << "." << endl;
}