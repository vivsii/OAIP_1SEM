#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "ru");
	using namespace std;
	float max = -9999, q = 1, y;
	for (int i = 0; i < 4; i++)
	{
		cout << "введите y = ";
		cin >> y;
		if (y > max)
		{
			max = y;
		}
		q *= (y + 2 * max);
	}
	cout << "q = " << q;
	return 0;
}
