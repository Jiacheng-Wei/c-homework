#ifndef CPERSON_H
#define CPERSON_H

#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class CPerson
{
public:
	CPerson(int age, string name);
	virtual ~CPerson();
	virtual void show(int age) const;
	virtual void show() const;
protected:
	int m_age;
	string m_name;
};

#endif