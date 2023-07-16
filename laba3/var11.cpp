#include <iostream>
int main()
{
	using namespace std;
	float w, d, a = 1.5, x = -1.8, z = 15e-9;
	w = tan(1) * (1 + x) + z - exp(a);
	d = 9 * sqrt(2 - 3 * x) + abs(a + 1);
	cout << "w=" << w << endl;
	cout << "d=" << d << endl;
	return 0;
}