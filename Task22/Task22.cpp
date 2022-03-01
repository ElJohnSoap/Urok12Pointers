/*Задание 2:
Используя указатель на массив целых чисел, изменить порядок следования элементов массива
на противоположный.
Использовать в программе арифметику указателей для продвижения по массиву, а также
оператор разыменования.*/

#include <iostream>
using namespace std;

void showArr(int* ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(ptr + i) << "\t";
    }
}

int main()
{
    const int size = 10;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 20;
    }
    int* ptrArr = arr;
    showArr(ptrArr, size);
    cout << endl;
    for (int i = 0; i < size/2; i++)
    {
        swap(*(ptrArr + i), *(ptrArr + (size - 1) - i));
    }
    showArr(ptrArr, size);
    cout << endl;
}

