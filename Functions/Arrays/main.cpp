//Function templates

//template<typename T>
//template
//typename 
//T - имя шаблонного типа

#include"FillRand.h"
#include"Print.h"
#include"Statistics.h"

void main()
{
	setlocale(LC_ALL, "");

	char num = -128;

	const unsigned int n = 5;
	int arr[n];
	//srand(5);
	int minRand, maxRand;
	//cout << "Введите минимальное случайное число: "; cin >> minRand;
	//cout << "Введите максимальное случайное число: "; cin >> maxRand;
	FillRand(arr, n, 200,300);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;;
	cout << delimiter << endl;

	double brr[n];
	FillRand(brr, n);
	Print(brr, n);
	cout << "Сумма элементов массива: " << Sum(brr, n) << endl;;
	cout << delimiter << endl;

	int i_arr_2[ROWS][COLS] = 
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	Print(i_arr_2, ROWS, COLS);

	cout << delimiter << endl;
	double d_arr_2[ROWS][COLS] = 
	{
		{2.5, 3.14, 8,3},
		{4.2, 7.3,  9.4},
		{.25}
	};
	Print(d_arr_2, ROWS, COLS);
}


