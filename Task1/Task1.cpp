/*. Дан массив целых чисел. Воспользовавшись указателями, поменяйте местами элементы массива с четными
и нечетными индексами (т.е. те элементы массива, которые стоят на четных местах, поменяйте с элементами,
которые стоят на нечетных местах).*/
#include <iostream>
using namespace std;

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << *(arr + i) << "\t";
    cout << endl;
}

void swapARR(int* pArr, int size)
{
    for (int i = 1; i < size; i += 2)
        swap(pArr[i], pArr[i - 1]);
}



int main()
{
    srand(time(NULL));
    const int size = 10;
    int arr[size];
    for (int i = 0; i < size; i++)
        arr[i] = rand() % 20;
    int* pArr = arr;
    print(pArr, size);
    
    swapARR(pArr, size);
    print(arr, size);

}
    