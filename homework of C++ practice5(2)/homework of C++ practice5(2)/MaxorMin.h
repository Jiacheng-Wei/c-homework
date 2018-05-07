#ifndef MAXORMIN_H
#define MAXORMIN_H



#pragma once

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

template <class Type>
class MaxorMin
{
public:
	MaxorMin();
	void Getarr();
	Type GetMax();
	Type GetMin();
private:
	Type *m_arr;
	Type m_max;
	Type m_min;
};

template <class Type>
MaxorMin<Type>::MaxorMin() {}
template <class Type>
void MaxorMin<Type>::Getarr()
{
	cout << "输入含五个元素的数组" << endl;
	Type *arr = new Type[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	m_arr = arr;
}


template <class Type>
Type MaxorMin<Type>::GetMax()
{
	Type m_max = m_arr[0];
	//int lenth = sizeof(m_arr) / sizeof(Type);
	for (int i = 0; i < 5; i++)
	{
		if (m_arr[i] > m_max)
		{
			m_max = m_arr[i];
		}
	}
	return m_max;
}
template <class Type>
Type MaxorMin<Type>::GetMin()
{
	Type m_min = m_arr[0];
	//int lenth = sizeof(m_arr) / sizeof(Type);
	for (int i = 0; i < 5; i++)
	{
		if (m_arr[i] < m_min)
		{
			m_min = m_arr[i];
		}
	}
	return m_min;
}

#endif
