#include"stdafx.h"
#include"Constants.h"

template<typename T>T Sum(T arr[], const unsigned int n)
{
	T sum = T();	//T() - �������� �� ��������� ��� ���������� ���� ������
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
