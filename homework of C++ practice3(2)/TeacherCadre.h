
#pragma once
#include "Cadre.h"
#include "Teacher.h"
#include <iostream>
#include <string>
using namespace std;

class TeacherCadre: public Teacher, public Cadre
{
public:
	TeacherCadre(string _name, int _age, string _sex, string _address, string _phonenum, int _salary, string _PrefessionalTitle,string _duty);
	~TeacherCadre();
	void show();
};

