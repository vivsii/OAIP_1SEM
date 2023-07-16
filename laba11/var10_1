#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int A, mask = 1 << 6,i ;
	char tmp[33];
	cout << "Введите число a: " << endl;
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "Число a в двоичном виде: " << tmp << endl;
	cout << "Результат = ";
	for (i = 1; i <= 6; i++)
	{
		
		putchar(mask & A ? '1' : '0');
		A <<= 1;
	}
}

