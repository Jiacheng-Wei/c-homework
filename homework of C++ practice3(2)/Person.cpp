#include "stdafx.h"
#include "Person.h"

Person::Person(){}
Person::Person(string _name,int _age,string _sex,string _address,string _phonenum,int _salary):m_strname(_name),m_iage(_age),m_strsex(_sex),m_straddress(_address),m_strphonenum(_phonenum),m_isalary(_salary){}
Person::~Person(){}
void Person::show()
{
	cout << "姓名是" << m_strname << "年龄是" << m_iage << "性别是" << m_strsex << "地址是" << m_straddress << "电话号码是" << m_strphonenum << "工资是" << m_isalary << endl;
}
