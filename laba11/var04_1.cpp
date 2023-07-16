#include <iostream> 
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int A; char s[33];
	cout << "Введите число ";
	cin >> A;
	_itoa_s(A, s, 2);
	cout << "Число в двоичном виде = " << s << endl;
	if ((A & 3) == 0)
		cout << "Число кратно 4" << endl;
	else
		cout << "Число не кратно 4" << endl;
	return 0;
}
