#include "stdafx.h"
#include "CBuilding.h"

CBuilding::CBuilding(int _floor,int _room,int _area):m_ifloor(_floor),m_iroom(_room),m_iarea(_area){}
CBuilding::~CBuilding(){}
int CBuilding::GetFloor()
{
	return m_ifloor;
}
int CBuilding::GetRoom()
{
	return m_iroom;
}
int CBuilding::GetArea()
{
	return m_iarea;
}