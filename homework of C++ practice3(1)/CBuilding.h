#ifndef CBUILDING_H
#define CBUILDING_H

#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;

class CBuilding
{
public:
	CBuilding(int _floor,int _room,int _area);
	~CBuilding();
	int GetFloor();
	int GetRoom();
	int GetArea();
protected:
	int m_ifloor;
	int m_iroom;
	int m_iarea;
};

#endif