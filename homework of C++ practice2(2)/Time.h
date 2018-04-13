#pragma once
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

class Time
{
public:
	Time();
	Time(int h, int min, int sec);
	void printInfo();
private:
	int m_iSec;
	int m_iMin;
	int m_iH;
};