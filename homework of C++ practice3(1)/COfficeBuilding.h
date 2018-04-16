#pragma once
#include "CBuilding.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

class COfficeBuilding : public CBuilding
{
public:
	COfficeBuilding(int _floor, int _room, int _area,int _extinguisher, int _phone);
	~COfficeBuilding();
	int GetExtinguisher();
	int GetPhone();
protected:
	int m_iextinguisher;
	int m_iphone;
};