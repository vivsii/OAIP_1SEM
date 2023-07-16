/*В последовательности из n целых чисел найти и вывести значение суммы четных элементов.*/
#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "ru");
	using namespace std;
	int n, sum = 0;
	cout << "Введите числа";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			sum += i;
	}
	cout << "sum = " << sum;
	return 0;

}

