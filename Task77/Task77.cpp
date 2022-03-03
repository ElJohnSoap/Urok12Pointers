/*Задание 7:
Написать примитивный калькулятор, пользуясь только указателями.*/
#include <iostream>
using namespace std;

void calc(int* ptra, char *sign, int* ptrb)
{
	//cout << sign;
	switch (*sign)
	{
	case '*':
		cout << (*ptra) * (*ptrb);
		break;
	case '/':
		cout << (*ptra) / (*ptrb);
		break;
	case '+':
		cout << (*ptra) + (*ptrb);
		break;
	case '-':
		cout << (*ptra) - (*ptrb);
		break;
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	int a, b;
	int* pa = &a;
	int* pb = &b;
	char sign;
	char* psign = &sign;
	cin >> a;
	cin >> sign;
	cin >> b;
	cout << a << " " << sign << " " << b << " = ";
	calc(pa, psign, pb);
	return 0;
}

