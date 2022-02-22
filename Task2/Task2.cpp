/*2. Даны два массива, упорядоченных по возрастанию:
А[n] и B[m]. Сформируйте массив C[n+m], состоящий из элементов массивов А и В, упорядоченный
по возрастанию. Используйте синтаксис указателей.*/

#include <iostream>
using namespace std;

void fillArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        arr[i] = rand()%100;
}

void showArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

void myShakerSort(int arr[], int size)
{
	bool change = true;
	int leftMark = 1;
	int rightMark = size - 1;
	while (change)
	{
		change = false;
		for (int j = rightMark; j >= leftMark; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				swap(arr[j - 1], arr[j]);
				change = true;
			}
		}
		leftMark++;
		if (!change) break;


		for (int i = leftMark; i <= rightMark; i++)
			if (arr[i - 1] >= arr[i])
			{
				swap(arr[i - 1], arr[i]);
				change = true;
			}
		rightMark--;
				
	}

}


int main()
{
    const int size1 = 10, size2 = 20;
    int arrA[size1], arrB[size2], arrC[size1 + size2];

    fillArr(arrA, size1);
    fillArr(arrB, size2);

    showArr(arrA, size1);
    showArr(arrB, size2);

	myShakerSort(arrA, size1);
	myShakerSort(arrB, size2);
    
    for (int i = 0; i < size1+size2; i++)
    {
        arrC[i] = arrA[i];
        if (i >= size1)
        {
            arrC[i] = arrB[i - size1];
        }
    }

	myShakerSort(arrC, size1+size2);

    showArr(arrC, size2+size1);

    return 0;
}


