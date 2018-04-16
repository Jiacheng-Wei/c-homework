#include "stdafx.h"
#include "CHousing.h"

CHousing::CHousing(int _floor, int _room, int _area,int _bedroom, int _bathroom) :CBuilding(_floor,_room,_area),m_bedroom(_bedroom), m_bathroom(_bathroom) {}
CHousing::~CHousing(){}
int CHousing::GetBedroom() 
{
	return m_bedroom;
}
int CHousing::GetBathroom()
{
	return m_bathroom;
}
