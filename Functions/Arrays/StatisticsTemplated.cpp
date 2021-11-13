#include"stdafx.h"
#include"Constants.h"

template<typename T>T Sum(T arr[], const unsigned int n)
{
	T sum = T();	//T() - значение по умолчанию для шаблонного типа данных
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
