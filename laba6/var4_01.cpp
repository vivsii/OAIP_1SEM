#include <iostream>
#include <iomanip>

int main() {
	using namespace std;
	float b = 2.5, m = 3, a = 1.4 * pow(10, -3), j, y, z;
	for (int i = 0; i < 3; i++)
	{
		cin >> j;
		y = (m * j) / tan(a) - exp(10 * m);
		z = 2 * y * b + sqrt(a + b);
		cout << "z=" << z << endl;
		cout << "y=" << y << endl;
	}
	return 0;
}
