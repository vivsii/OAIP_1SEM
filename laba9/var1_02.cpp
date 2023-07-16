/*
x^3 + x - 3
a = 1, b = 3
e = 0.0001
*/
#include <iostream>
int main() {
	setlocale(LC_CTYPE, "ru");
	using namespace std;
	float a, b, e, x;
	cout << "Введите а = ";
	cin >> a;
	cout << "Введите b = ";
	cin >> b;
	cout << "Введите e = ";
	cin >> e;
	do
	{
		x = (a + b) / 2;
		if ((pow(x, 3) + x - 3) * (pow(a, 3) + a - 3) <= 0)
			b = x;
		else
			a = x;
	} while (abs(a - b) > 2 * e);
	cout << "x = " << x;
	return 0;
}
