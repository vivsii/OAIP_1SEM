#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Ru");
	using namespace std;
	float y = 2.7, a = -5.5 * pow(10, -4), j, z, x;
	for (int i = 0; i < 4; i++)
	{
		cout << "Введите число" << endl;
		cin >> j;
		x = cos(y) * cos(y) / (j + 2 * a * y);
		if (x >= sqrt(y))
			z = exp(-j);
		else
			z = (0.5 * y / j) * (0.5 * y / j);

		cout << "z=" << z << endl;
	}
	return 0;
}
