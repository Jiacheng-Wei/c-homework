#include "stdafx.h"
#include "Time.h"


	Time::Time()
	{
		m_iSec = 0;
		m_iMin = 0;
		m_iH = 0;
	}
	Time::Time(int h, int min, int sec) :m_iSec(sec), m_iMin(min), m_iH(h) {}
	void Time::printInfo()
	{
		cout << m_iH << ":" << m_iMin << ":" << m_iSec << endl;
	}
