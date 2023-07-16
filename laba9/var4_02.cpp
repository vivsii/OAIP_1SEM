/*
e^x - 3 - 1/x
a = 2, b = 3
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
		if ((exp(x) - 3 - 1 / x) * (exp(a) - 3 - 1 / a) <= 0)
			b = x;
		else
			a = x;
	}
	while (abs(a - b) > 2 * e);
	cout << "x = " << x;
	return 0;
}
