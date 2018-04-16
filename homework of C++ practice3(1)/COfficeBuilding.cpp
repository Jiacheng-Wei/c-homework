#include "stdafx.h"
#include "COfficeBuilding.h"

COfficeBuilding::COfficeBuilding(int _floor, int _room, int _area,int _extinguisher, int _phone):CBuilding(_floor,_room,_area),m_iextinguisher(_extinguisher),m_iphone(_phone){}
COfficeBuilding::~COfficeBuilding(){}
int COfficeBuilding::GetExtinguisher()
{
	return m_iextinguisher;
}
int COfficeBuilding::GetPhone()
{
	return m_iphone;
}