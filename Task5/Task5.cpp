/*Задание 5:
Используя указатели и оператор разыменования, определить знак числа, введённого с
клавиатуры.*/

#include <iostream>
using namespace std;

void sign(int* p)
{
	cout << ((*p > 0) ? "+" : "-");
}

void sign(int &p)
{
	cout << ((p > 0) ? "+" : "-");
}
int main()
{
	int a;
	cin >> a;
	int* ptra = &a;
	sign(ptra);
	cout << endl;
	sign(a);
}
