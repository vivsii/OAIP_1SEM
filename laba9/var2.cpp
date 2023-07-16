/*
cos^3(x)
a = 4, b = 7
n=200
*/
#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "ru");
	float a, b, n, s, h, x;
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
		s = s + h * (pow(cos(x),3) + pow(cos(x+h),3)) / 2;
		x = x + h;
	} while (x < (b - h));
	cout << "S = " << s;
	return 0;
}
