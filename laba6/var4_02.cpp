#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float b = 2.5, m = 3, a = 1.4 * pow(10, -3), j, y, z;
	j = b;
	while (j < 3.1)
	{
		j = j + 0.1;
		y = (m * j) / tan(a) - exp(10 * m);
		z = 2 * y * b + sqrt(a + b);
		cout << "z=" << z << endl;
		cout << "y=" << y << endl;

	}
	return 0;
}
