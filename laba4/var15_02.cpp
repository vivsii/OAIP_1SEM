#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	float p, e, n;
	cout << "Введите номер кваритиры" << endl;
	cin >> n;
	p = n / 36 + 1;
	e = n / 4 + 1;
	return 0;
	cout << "Номер подъезда - " << p << endl;
	cout << "Номер этажа - " << e << endl;

}
