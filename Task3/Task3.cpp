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
		arr[i] = rand() % 100;
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
	const int size = 20, size2 = size * 2;
	int arrA[size], arrB[size];

	int* arrC = new int[size2];

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

	showArr(arrC, size2);
	

	int count = 0;
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
	showArr(arrC, count);
	cout << endl;
	return 0;
}

