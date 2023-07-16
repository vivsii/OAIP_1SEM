#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	char s[33];
	int A, B, maskA = 14;
	int maskB = ~maskA >> 1;
	int  p, n, razn, m, q, razn1;
	cout << "Введите первое число " << endl;
	cin >> A;
	_itoa_s(A, s, 2);
	cout << s << endl;
	cout << "Введите начальную позицию " << endl;
	cin >> p;
	cout << "Введите число битов " << endl;
	cin >> n;
	razn = p - n;
	while (p >= razn)
	{
		A &= ~(1 << p);
		_itoa_s(A, s, 2);
		p--;
	}
	cout << s << endl;
	cout << "Маска для А: " << s << endl;
	_itoa_s((A & maskA) >> 1, s, 2);
	cout << "Выделенные биты А: " << s << endl;
	_itoa_s(maskB, s, 2);
	cout << "Введите Второе число " << endl;
	cin >> B;
	_itoa_s(B, s, 2);
	cout << s << endl;
	cout << "Введите начальную позицию q = " << endl;
	cin >> q;
	cout << "Введите число битов m = " << endl;
	cin >> m;	
	cout << "Маска для В: " << s << endl;
	_itoa_s(B & maskB, s, 2);
	razn1 = q - m;
	cout << " Очищены биты в B: " << s << endl;
	_itoa_s(((B & maskB) | ((A & maskA) >> razn1 )), s, 2);

}

