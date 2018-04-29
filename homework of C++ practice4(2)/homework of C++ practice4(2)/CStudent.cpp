#include "stdafx.h"
#include "CStudent.h"

CStudent::CStudent(int age, string name, string grade):CPerson(age,name),m_grade(grade){}
CStudent::~CStudent(){}
void CStudent::show(int age) const 
{
	cout << "CStudent::Show(age):" << m_age << ",name" << m_name << ",grade:" << m_grade << "." << endl;
}
