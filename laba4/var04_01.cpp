#include <iostream>
#include <iomanip>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel; probel = ' ';
	cout << "Введите символ" << endl; cin >> c;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(11) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(11) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	return 0;
}
