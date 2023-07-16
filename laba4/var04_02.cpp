#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	float x, y, z, p, v;
	cout << "Введите значения" << endl; 
	cin >> x; cin >> y; cin >> z;
	p = (x + y + z) / 3;
	v = sqrt(abs(x) * abs(y) * abs(z));
	cout << "p=" << p << endl;
	cout << "v=" << v << endl;
		return 0;
}
