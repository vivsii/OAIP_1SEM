/*Найти количество различных чисел среди элементов целочисленного массива Z, содержащего n элементов.*/
#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "ru");
	using namespace std;
	srand((unsigned)time(NULL));
	const int N = 100;
	int Z[N], n, m = 0;
	cout << "Введите размер массива Z: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		*(Z + i) = rand() % n;
	}
	cout << "Z = { ";
	for (int i = 0; i <  + n; i++)
		cout << Z[i] << " ";
	cout << "}" << endl;
	for (int i = 0; i < n; i++)
	{
		if (*(Z + i) > *(Z + i + 1) || *(Z + i) < *(Z + i + 1))
			m++;
		else
			m--;
	}
	if (m > 0)
		cout << "Меняются " << m << "раз";
	return 0;
}
