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
		arr[i] = rand() % 10;
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
	int arrA[size], arrB[size], arrC[size2];

	initArr(arrA, size);
	initArr(arrB, size);

	showArr(arrA, size);
	showArr(arrB, size);




	

	return 0;
}

