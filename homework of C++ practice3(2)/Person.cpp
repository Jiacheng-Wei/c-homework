#include "stdafx.h"
#include "Person.h"

Person::Person(){}
Person::Person(string _name,int _age,string _sex,string _address,string _phonenum,int _salary):m_strname(_name),m_iage(_age),m_strsex(_sex),m_straddress(_address),m_strphonenum(_phonenum),m_isalary(_salary){}
Person::~Person(){}
void Person::show()
{
	cout << "������" << m_strname << "������" << m_iage << "�Ա���" << m_strsex << "��ַ��" << m_straddress << "�绰������" << m_strphonenum << "������" << m_isalary << endl;
}
