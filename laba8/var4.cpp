#include <iostream>
int main() 
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int m;
	puts("Введите номер месяца");
	cin >> m;
	switch (m)
	{
	case 1: {puts("Зима"); break; }
	case 2: {puts("Зима"); break; }
	case 3: {puts("Весна"); break; }
	case 4: {puts("Весна"); break; }
	case 5: {puts("Весна"); break; }
	case 6: {puts("Лето"); break; }
	case 7: {puts("Лето"); break; }
	case 8: {puts("Лето"); break; }
	case 9: {puts("Оень"); break; }
	case 10: {puts("Осень"); break; }
	case 11: {puts("Осень"); break; }
	case 12: {puts("Зима"); break; }
	}
	return 0;
}
