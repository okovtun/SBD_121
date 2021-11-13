#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int* arr, const int n);

void main()
{
	setlocale(LC_ALL, "");
	int n;	//Размер массива
	cout << "Введите размер массива: "; cin >> n;
	
	//Объявление динамического массива:
	int* arr = new int[n];
	
	FillRand(arr, n);
	Print(arr, n);
	
	//Удаление динамического массива:
	delete[] arr;
}

void FillRand(int arr[], const int n)
{
	//Обращение к элементам динамического массива:
	for (int i = 0; i < n; i++)
	{
		//Через арифметику указателей и оператор разыменования:
		*(arr + i) = rand() % 100;
	}
}
void Print(int* arr, const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Через оператор индексирования:
		cout << arr[i] << "\t";
		//Оператор индексирования возвращает значение по индексу.
	}
	cout << endl;
}