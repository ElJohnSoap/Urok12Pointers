/*Задание 4:
Используя указатели и оператор разыменования, определить наибольшее из двух чисел.
*/

#include <iostream>
using namespace std;

void max(int& a, int& b)
{
	if (a == b) cout << "a = b";
	else cout << ((a > b) ? a : b);
}
int main()
{
	int a, b;
	cin >> a >> b;
	int* pa = &a;
	int* pb = &b;
	max(a, b);

	return 0;
}

