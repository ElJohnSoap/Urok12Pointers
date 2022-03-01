/*Задание 3:
Используя два указателя на массивы целых чисел, скопировать один массив в другой так, чтобы
во втором массиве элементы находились в обратном порядке.
Использовать в программе арифметику указателей для продвижения по массиву, а также
оператор разыменования.
*/

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
    int arr1[size], arr2[size];
    int* ptrArr1 = arr1;
    int* ptrArr2 = arr2;
    for (int i = 0; i < size; i++)
    {
        *(ptrArr1 + i) = rand() % 20;
    }
    cout << "Array 1: ";
    showArr(ptrArr1, size);

    for (int i = 0; i < size; i++)
    {
        *(ptrArr2 + i) = ptrArr1[size-1-i];
    }
    cout << "\nArray 2: ";
    showArr(ptrArr2, size);

    return 0;
}
