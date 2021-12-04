#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int* arr, const int n);

int* push_back(int arr[], int& n, int value);
int* push_front(int arr[], int& n, int value);
int* pop_back(int arr[], int& n);

#define DYNAMIC_MEMORY_1

void main()
{
	setlocale(LC_ALL, "");
#ifdef DYNAMIC_MEMORY_1
	cout << "Hello" << endl;
	cout << sizeof("+") << endl;
	cout << sizeof('+') << endl;
	int n;	//Размер массива
	cout << "Введите размер массива: "; cin >> n;

	//Объявление динамического массива:
	int* arr = new int[n] {};

	FillRand(arr, n);
	Print(arr, n);

	int value;	//Добавляемое значение
	cout << "Введите добавляемое значение: "; cin >> value;

	arr = push_back(arr, n, value);
	Print(arr, n);

	cout << "Введите добавляемое значение: "; cin >> value;
	arr = push_front(arr, n, value);
	Print(arr, n);

	arr = pop_back(arr, n);
	Print(arr, n);

	//Удаление динамического массива:
	delete[] arr;
	//Print(arr, n);	//Runtime error  
#endif // DYNAMIC_MEMORY_1


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
	for (int i = 0; i < n; cout << arr[i++] << "\t");
	//{
	//	//Через оператор индексирования:
	//	//cout << arr[i] << "\t";
	//	//Оператор индексирования возвращает значение по индексу.
	//}
	cout << endl;
}

int* push_back(int arr[], int& n, int value)
{
	//1) Создаем буферный массив нужного размера
	int* buffer = new int[n + 1]{};
	//2) Копируем содержимое исходного массива в новый (буферный) массив:
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3) После того как данные скопированы, исходный массив можно удалить
	delete[] arr;
	//4) Подменяем адрес старого массива адресом нового массива:
	arr = buffer;
	//5) Только после этого в массиве 'arr' появляется еще один элемент, 
	//	 в который можно созранить добавляемое значение
	arr[n] = value;
	//6) После того как в массиве появился еще один элемент, количество его элементов 
	//	 увеличилось на 1
	n++;
	//Print(arr, n);
	return arr;
	//						Mission complete.
}

int* push_front(int arr[], int& n, int value)
{
	int* buffer = new int[n + 1]{};
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];
	}
	delete[] arr;
	buffer[0] = value;
	n++;
	return buffer;
}

int* pop_back(int arr[], int& n)
{
	int* buffer = new int[--n]{};
	for (int i = 0; i < n; i++)buffer[i] = arr[i];
	delete[] arr;
	return buffer;
}