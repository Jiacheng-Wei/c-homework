#include "stdafx.h"
#include "Cadre.h"

Cadre::Cadre(){}
Cadre::Cadre(string _name, int _age, string _sex, string _address, string _phonenum, int _salary, string _duty) :Person(_name, _age, _sex, _address, _phonenum, _salary), m_strDuty(_duty) {}
Cadre::~Cadre() {}
void Cadre::show()
{
	cout << "������" << m_strname << "������" << m_iage << "�Ա���" << m_strsex << "��ַ��" << m_straddress << "�绰������" << m_strphonenum << "������" << m_isalary << "ְ����" << m_strDuty	 << endl;
}