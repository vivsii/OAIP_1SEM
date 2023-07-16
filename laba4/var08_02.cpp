#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	float a, b, c, p, S;
	cout << "Введите значения" << endl;
	cin >> a; cin >> b; cin >> c;
	p = (a + b + c) / 2;
	S = sqrt(p*(p - a) * (p - b) * (p - c));
	cout << "S=" << S << endl;
	return 0;
}
