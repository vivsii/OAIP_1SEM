/*Вычислить наибольший общий делитель натуральных чисел а и b.*/
#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "ru");
	using namespace std;
	int a, b;
	cout << "Введите первое число" << endl;
	cin >> a;
	cout << "Введите второе число" << endl; //Наибольший общий делитель
	cin >> b;
	while ((a != 0) && (b != 0))
	{
		if (a > b)
			a = a % b;
		else
			b = b % a;
	}
	cout << "Нод = " << a + b;
	return 0;
}
