#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int r;
	puts("Лабу сделал?(1-да, 2-нет)");
	std::cin >> r;
	switch (r)
	{
	case 1: { puts("Скинешь? (1-Да, конечно друг; 2- Нет, сам делай)");
		std::cin >> r;
		switch (r)
		{
		case 1: puts("Ты мой самый лучший друг"); break;
		case 2: puts("Да пошел ты"); break;
		}
		break;
	}
	case 2: puts("Блин, ну ладно"); break;
	default: puts("Ну ты чего"); break;
	}
	return 0;
}
