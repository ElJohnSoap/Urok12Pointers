/*Используя указатель на массив целых чисел, посчитать сумму элементов массива. Использовать
в программе арифметику указателей для продвижения по массиву, а также оператор
разыменования.*/

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    const int size = 10;
    int arr[size];
    int* ptrA = arr;
    for (int i = 0; i < size; i++)
    {
        ptrA[i] = rand() % 10;
        cout << *(ptrA + i) << "\t";
        sum += arr[i];
    }
    cout << endl << sum;
    return 0;
}