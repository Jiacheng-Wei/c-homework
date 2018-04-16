#include "stdafx.h"
#include "Cadre.h"

Cadre::Cadre(){}
Cadre::Cadre(string _name, int _age, string _sex, string _address, string _phonenum, int _salary, string _duty) :Person(_name, _age, _sex, _address, _phonenum, _salary), m_strDuty(_duty) {}
Cadre::~Cadre() {}
void Cadre::show()
{
	cout << "姓名是" << m_strname << "年龄是" << m_iage << "性别是" << m_strsex << "地址是" << m_straddress << "电话号码是" << m_strphonenum << "工资是" << m_isalary << "职务是" << m_strDuty	 << endl;
}