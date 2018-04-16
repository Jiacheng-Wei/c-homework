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
	cout << "姓名是" << m_strname << "年龄是" << m_iage << "性别是" << m_strsex << "地址是" << m_straddress << "电话号码是" << m_strphonenum << "工资是" << m_isalary << "职称是" <<m_strPrefessionalTitle<<endl;
}
