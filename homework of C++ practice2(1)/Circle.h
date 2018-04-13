#include <iostream>
#include <stdlib.h>
using namespace std; 

#define pai 3.1415


class Circle
{
public:
	Circle();
	~Circle();
	void SetRadius();
	double Perimeter();
	double Area();
	void printInfo();
private:
	int m_iRadius;
};