// homework of C++ practice3(1).cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "CBuilding.h"
#include "CHousing.h"
#include "COfficeBuilding.h"
#include <iostream>
#include <stdlib.h>
using namespace std;


int main()
{
	COfficeBuilding officebuilding(3, 5, 6, 7, 8);
	CHousing housing(9, 7, 6, 5, 2);
	cout << "楼层数" << officebuilding.GetFloor() << "房间数" << officebuilding.GetRoom() << "面积为" << officebuilding.GetArea() << "灭火器数" << officebuilding.GetExtinguisher() << "电话数为" << officebuilding.GetPhone() << endl;
	cout << "楼层数" << housing.GetFloor() << "房间数" << housing.GetRoom() << "面积为" << housing.GetArea() << "卧室数" << housing.GetBedroom() << "浴室数为" << housing.GetBathroom() << endl;
	system("pause");
    return 0;
}

