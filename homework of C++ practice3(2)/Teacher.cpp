#include "stdafx.h"
#include "Teacher.h"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

Teacher::Teacher(){}
Teacher::Teacher(string _name, int _age, string _sex, string _address, string _phonenum, int _salary,string _PrefessionalTitle):Person(_name,_age,_sex,_address,_phonenum,_salary),m_strPrefessionalTitle(_PrefessionalTitle){}
Teacher::~Teacher() {}
void Teacher::show()
{
	cout << "������" << m_strname << "������" << m_iage << "�Ա���" << m_strsex << "��ַ��" << m_straddress << "�绰������" << m_strphonenum << "������" << m_isalary << "ְ����" <<m_strPrefessionalTitle<<endl;
}
