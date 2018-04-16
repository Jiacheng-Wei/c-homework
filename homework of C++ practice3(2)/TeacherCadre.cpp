#include "stdafx.h"
#include "TeacherCadre.h"


TeacherCadre::TeacherCadre(string _name, int _age, string _sex, string _address, string _phonenum, int _salary, string _PrefessionalTitle, string _duty)
//:Teacher(_name, _age, _sex, _address, _phonenum, _salary,_PrefessionalTitle),Cadre(_name, _age, _sex, _address, _phonenum, _salary,_duty){}
{
	m_strname = _name;
	m_iage = _age;
	m_strsex = _sex;
	m_straddress = _address;
	m_strphonenum = _phonenum;
	m_isalary = _salary;
	m_strPrefessionalTitle = _PrefessionalTitle;
	m_strDuty = _duty;
}
TeacherCadre::~TeacherCadre() {}
void TeacherCadre::show()
{
	cout << "姓名是" << m_strname << "年龄是" << m_iage << "性别是" << m_strsex << "地址是" << m_straddress << "电话号码是" << m_strphonenum << "工资是" << m_isalary <<"职称是"<<m_strPrefessionalTitle<< "职务是" << m_strDuty << endl;
}