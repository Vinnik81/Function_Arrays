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
	cout << "������� ��� �����: ";
	cin >> a >> b;
	int c = Add(a, b);
	cout << c << endl;
	cout << Sub(a, b) << endl;
	cout << Mul(a, b) << endl;
	cout << Div(a, b) << endl;

}

int Add(int a, int b)
{ //Addition - ��������
	int c = a + b;
	return c;
}
int Sub(int a, int b)
{ //Subtraction - ���������
	return a - b;
}
int Mul(int a, int b)
{ //Multiplication - ���������
	return a * b;
}
double Div(int a, int b)
{ //Division - �������
	return (double)a / b;
}

