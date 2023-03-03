#include<iostream>
using namespace std;
int Sum(int a, int b);
int Dif(int a, int b);
int Product(int a, int b);
double Quotient(double a, double b);
int Reminder(int a, int b);
int Factorial(int n);
double Power(double a, int n);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Sum(a, b);
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Dif(a,b) << endl;
	cout << a << " * " << b << " = " << Product(a,b) << endl;
	cout << a << " / " << b << " = " << Quotient(a,b) << endl;
	cout << a << " % " << b << " = " << Reminder(a,b) << endl;

	int n;
	cout << "Введите число для вычисления факториала: "; cin >> n;
	cout << n << "! = " << Factorial(n) << endl;

	cout << a << " ^ " << b << " = " << Power(a, b) << endl;
}

int Sum(int a, int b) // сумма
{
	int c = a + b;
	return c;
}
int Dif(int a, int b) // разность
{
	return a - b;
}
int Product(int a, int b) // умножение
{
	return a * b;
}
double Quotient(double a, double b) // деление
{
	return a / b;
}
int Reminder(int a, int b)
{
	return a % b;
}
int Factorial(int n)
{
	int f = 1;
	for (int i = 1; i <=n; i++)
	{
		f *= i;
	}
	return f;
}
double Power(double a, int n)
{
	double N = 1;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	return N;
}

