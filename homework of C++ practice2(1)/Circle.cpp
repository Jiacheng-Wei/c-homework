#include "stdafx.h"
#include "Circle.h"


#define pai 3.1415

	Circle::Circle()
	{
		m_iRadius = 1;
	}
	Circle::~Circle(){}
	void Circle::SetRadius()
	{
		cout << "please enter radious" << endl;
		int _Radius;
		cin >> _Radius;
		m_iRadius = _Radius;
	}
	double Circle::Perimeter()
	{
		double perimeter;
		perimeter = 2 * pai*m_iRadius;
		return perimeter;
	}
	double Circle::Area()
	{
		double area;
		area = pai * m_iRadius*m_iRadius;
		return area;
	}
	void Circle::printInfo()
	{
		cout << "Radius is:" << m_iRadius << "  perimeter is:" << Perimeter() << " area is:" << Area() << endl;
	}