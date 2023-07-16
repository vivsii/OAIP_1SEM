/*
cos^3(x)
a = 4, b = 7
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
		s2 = s2 + pow(cos(x),3);
		x = x + h;
		s1 = s1 + pow(cos(x), 3);
		x = x + h;
		i = i + 1;
	} while (i < n);
	s = h / 3 * (pow(cos(a), 3) + 4 * pow(cos(a+h), 3) + 4 * s1 + 2 * s2 + pow(cos(b), 3));
	cout << "S = " << s;
	return 0;
}
