#include <iostream>
#include <Windows.h>
using namespace std;

int Add(int a, int b);
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);

void main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord;
	SetConsoleDisplayMode(hConsole, CONSOLE_FULLSCREEN_MODE, &coord);

	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Введите два числа: ";
	cin >> a >> b;
	int c = Add(a, b);
	cout << c << endl;
	cout << Sub(a, b) << endl;
	cout << Mul(a, b) << endl;
	cout << Div(a, b) << endl;

}

int Add(int a, int b)
{ //Addition - сложение
	int c = a + b;
	return c;
}
int Sub(int a, int b)
{ //Subtraction - вычитание
	return a - b;
}
int Mul(int a, int b)
{ //Multiplication - умножение
	return a * b;
}
double Div(int a, int b)
{ //Division - деление
	return (double)a / b;
}

