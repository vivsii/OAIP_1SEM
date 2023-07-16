/*Дан целочисленный массив Х, содержащий n элементов. Найти количество различных чисел среди элементов этого массива.*/
#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "ru");
	using namespace std;
	const int N = 100;
	int X[N], n, m = 0;
	cout << "Введите размер массива Z: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> *(X + i);
	}
	cout << "X = { ";
	for (int i = 0; i < +n; i++)
		cout << X[i] << " ";
	cout << "}" << endl;
	for (int i = 0; i < n; i++)
	{
		if (*(X + i) > *(X + i + 1) || *(X + i) < *(X + i + 1))
			m++;
	}
	if (m > 0)
		cout << "Количество различных чисел = " << m;
	return 0;
}
