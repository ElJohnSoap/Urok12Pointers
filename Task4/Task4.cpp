/*Задание 6:
Используя указатели и оператор разыменования, обменять местами значения двух переменных.
*/

#include <iostream>
using namespace std;

void SWAP(int* ptrA, int* ptrB)
{
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

void SWAP(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 5, b = 10;
    int* ptrA = &a;
    int* ptrB = &b;
    cout << "a = " << a << " b = " << b << endl;
    SWAP(&a, &b);
    cout << "a = " << a << " b = " << b << endl;
    SWAP(ptrA, ptrB);
    cout << "a = " << a << " b = " << b << endl;
    SWAP(a, b);
    cout << "a = " << a << " b = " << b << endl;

    return 0;
}
