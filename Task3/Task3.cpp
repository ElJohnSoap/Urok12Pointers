/*. Даны два массива: А[n] и B[m]. Необходимо создать
третий массив, в котором нужно собрать:
■ Элементы обоих массивов;
■ Общие элементы двух массивов;
■ Элементы массива A, которые не включаются в B;
■ Элементы массива B, которые не включаются в A;
■ Элементы массивов A и B, которые не являются общими для них (то есть объединение результатов двух
предыдущих вариантов).
Обязательно используйте синтаксис указателей для
решения этой задачи*/

#include <iostream>
using namespace std;

void initArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 50;
	}
}

void showArr(int* pArr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(pArr + i)<< "\t";
		if ((i + 1) % 10 == 0)
		{
			cout << endl;
		}
	}
	cout << endl;
}


int main()
{
	setlocale(LC_ALL, "ru");
	bool replay = true;
	const int size = 20, size2 = size * 2;
	int arrA[size], arrB[size];
	int* ptrA = arrA;
	int* ptrB = arrB;
	int count = size2;
	int* arrC = new int[count];

	initArr(arrA, size);
	initArr(arrB, size);

	showArr(arrA, size);
	showArr(arrB, size);

	for (int i = 0; i < size2; i++) //Элементы обоих массивов;
	{

		if (i >= size)
		{
			arrC[i] = arrB[i - size];
		}
		else 
			arrC[i] = arrA[i];
		
	}
	cout << endl;

	cout << "\nЭлементы обоих массивов:\n";
	showArr(arrC, size2);
	delete[]arrC;
	arrC = nullptr;


	count = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arrA[i] == arrB[j])
			{
				count++;
				break;
			}
		}
	}

	arrC = new int[count];
	for (int i = 0, c = 0; i < size; i++) //Общие элементы двух массивов;
	{
		for (int j = 0; j < size; j++)
		{
			if (arrA[i] == arrB[j])
			{
				arrC[c] = arrA[i];
				c++;
				break;
			}
		}
	}
	cout << endl;
	cout << "\nОбщие элементы двух массивов:\n";
	showArr(arrC, count);
	cout << endl;

	for (int i = 0, c = 0; i < size; i++) //Элементы массива A, которые не включаются в B;
	{
		replay = true;
		for (int j = 0; j < size; j++)
		{
			if (arrA[i] == arrB[j])
			{
				replay = false;
			}
		}
		if (replay)
		{
			arrC[c] = ptrA[i];
			c++;
		}
		count = c;
	}
	cout << "\nЭлементы массива A, которые не включаются в B:\n";
	showArr(arrC, count);
	cout << endl;

	for (int i = 0, c = 0; i < size; i++) //Элементы массива B, которые не включаются в A;
	{
		replay = true;
		for (int j = 0; j < size; j++)
		{
			if (*(ptrB+i) == *(ptrA+j))
			{
				replay = false;
			}
		}
		if (replay)
		{
			arrC[c] = ptrB[i];
			c++;
		}
		count = c;
	}
	cout << "\nЭлементы массива B, которые не включаются в A:\n";
	showArr(arrC, count);
	cout << endl;


	bool replay2 = true;
	for (int i = 0, c = 0; i < size; i++) /*Элементы массивов A и B, которые не являются общими для них(то есть объединение результатов двух
		                                    предыдущих вариантов)*/
	{
		replay = true;
		replay2 = true;
		for (int j = 0; j < size; j++)
		{
			if (arrA[i] == arrB[j])
			{
				replay = false;
			}
			if (*(ptrB + i) == *(ptrA + j))
			{
				replay2 = false;
			}
		}
		if (replay)
		{
			arrC[c] = ptrA[i];
			c++;
		}
		if (replay2)
		{
			arrC[c] = ptrB[i];
			c++;
		}

		count = c;
	}
	cout << "\nЭлементы массивов A и B, которые не являются общими:\n";
	showArr(arrC, count);
	
	return 0;
}