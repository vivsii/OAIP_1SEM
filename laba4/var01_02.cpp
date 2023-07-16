#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	float d, S;
	cout << "Введите значениe" << endl;
	cin >> d; 
	S = pow(d, 2) / 2;
	cout << "S=" << S << endl;
	return 0;
}
