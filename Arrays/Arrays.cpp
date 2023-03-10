#include<iostream>
using namespace std;



void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int sum = 0;
	/*arr[2] = 123;
	cout << arr[2] << endl;*/
	cout << "Введите элементы массива: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма: " << sum << endl;
	cout << "Среднее арифметическое: " << (double)sum / n << endl;
	int max = arr[0];
	int	min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i];
	}
	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;
}