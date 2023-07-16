/*
x^3 - 3
a = 1, b = 3
n=200
*/
#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "ru");
	double a, b, n, s, h, x;
	cout << "Введите а = ";
	cin >> a;
	cout << "Введите b = ";
	cin >> b;
	cout << "Введите n = ";
	cin >> n;
	h = (b - a) / n;
	x = a;
	s = 0;
	cout << "h = " << h << endl;
	do
	{
		s = s + h * ((pow(x , 3) - 3) + (pow((x + h), 3) - 3)) / 2;
		x = x + h;
	} while (x < (b - h));
	cout << "S = " << s;
	return 0;
}
