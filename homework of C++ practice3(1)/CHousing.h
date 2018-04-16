#pragma once

#include "CBuilding.h"
#include <stdlib.h>
#include <iostream>
using namespace std;

class CHousing :public CBuilding
{
public:
	CHousing(int _floor, int _room, int _area,int _bedroom,int bathroom);
	~CHousing();
	int GetBedroom();
	int GetBathroom();
protected:
	int m_bedroom;
	int m_bathroom;
};
