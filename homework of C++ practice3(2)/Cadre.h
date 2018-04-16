#ifndef CADRE_H
#define CADRE_H
#pragma once
#include "Person.h"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class Cadre :virtual public Person
{
public:
	Cadre();
	Cadre(string _name, int _age, string _sex, string _address, string _phonenum, int _salary, string _duty);
	~Cadre();
	void show();
protected:
	string m_strDuty;
};

#endif