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
	cout << "������" << m_strname << "������" << m_iage << "�Ա���" << m_strsex << "��ַ��" << m_straddress << "�绰������" << m_strphonenum << "������" << m_isalary <<"ְ����"<<m_strPrefessionalTitle<< "ְ����" << m_strDuty << endl;
}