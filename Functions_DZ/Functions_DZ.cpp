#include<iostream>
using namespace std;
double Factorial(int n, double f);
double Power(double a, double n, double res);

#define FACTORIAL
//#define POWER

void main()
{
    setlocale(LC_ALL, "");
#ifdef FACTORIAL
    cout << "Введите число для вычисления факториала "; cin >> n;
    cout << "Факториал для числа " << n << "! = " << Factorial(n, f) << endl;
#endif // FACTORIAL

#ifdef POWER
    double n, a;
    double res = 1;
    cout << "Введите число и степень "; cin >> a >> n;
    cout << "Число " << a << " в степени " << n << " = " << Power(a, n, res) << endl;
#endif // POWER
}

    double Factorial(int n, double f)
    {
        for (int i = 1; i <= n; i++)
        {
            f *= i;
        }
        return f; 
    }
    double Power(double a, double n, double res)
    {
    int n;
    double f = 1;
        if (n < 0)
        {
            a = 1 / a;
            n = -n;
        }
        for (int i = 0; i < n; i++)
        {
            res *= a;
        }
        return res;
    }



