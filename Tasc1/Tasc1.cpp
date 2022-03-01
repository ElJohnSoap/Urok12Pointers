/*Задание 1:
Используя два указателя на массив целых чисел, скопировать один массив в другой.
Использовать в программе арифметику указателей для продвижения по массиву, а также
оператор разыменования.
*/

#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout <<arr[i]<< "\t";
    }
}

int main()
{
    const int size = 10;
    int arr1[size], arr2[size];
    int* ptrArr1 = arr1;
    int* ptrArr2 = arr2;
    for (int i = 0; i < size; ++i)
    {
        arr1[i] = rand() % 20;
    }
    cout << "Array 1 : ";
    printArr(arr1, size);
    cout << endl;
    cout << "Array 2 : ";
    printArr(arr2, size);
    cout << endl;
    for (int i = 0; i < size; i++) 
    {
        *(ptrArr2++) = *(ptrArr1++);
    }
    cout << "Array 2 : ";
    printArr(arr2, size);

}

