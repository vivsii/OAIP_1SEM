#include <iostream>
#include <iomanip>

int main() {
	setlocale(LC_CTYPE, "Ru");
	using namespace std;
	float b = 2.5, m, a = 1.4 * pow(10, -3), j, y, z;
	for (int i = 0; i < 3; i++)
	{
		cout << "введите m = ";
		cin >> m;

		for (int t = 0; t < 4; t++)
		{
			cout << "Введите j = ";
			cin >> j;
			y = (m * j) / tan(a) - exp(10 * m);
			z = 2 * y * b + sqrt(a + b);
			cout << "z=" << z << endl;
			cout << "y=" << y << endl;
		}
	}
	return 0;
}
