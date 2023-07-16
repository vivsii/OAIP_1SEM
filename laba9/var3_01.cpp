/*
1 + x^3
a = 1, b = 6
n=200
*/
#include <iostream>
int main() {
	setlocale(LC_CTYPE, "ru");
	using namespace std;
	double a, b, n, s1, s2, s, i, h, x;
	cout << "Введите а = ";
	cin >> a;
	cout << "Введите b = ";
	cin >> b;
	cout << "Введите n = ";
	cin >> n;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	s1 = 0;
	s2 = 0;
	i = 1;
	do
	{
		s2 = s2 + (pow(x, 3) + 1);
		x = x + h;
		s1 = s1 + (pow(x, 3) + 1);
		x = x + h;
		i = i + 1;
	} while (i < n);
	s = h / 3 * ((pow(a, 3) + 1) + 4 * (pow((a + h), 3) + 1) + 4 * s1 + 2 * s2 + (pow(b, 3) + 1));
	cout << "S = " << s;
	return 0;
}
