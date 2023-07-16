/*
Дана строка символов, состоящая из произвольных десятичных цифр, разделенных пробелами. Найти числа этой строки в порядке возрастания их значений. 
*/
#include <iostream>
#include <stdio.h>
#include <cstring>

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "ru");
	char s[20], *ps;
	int n, t, i;
	cout << "Введите строку" << endl;
	gets_s(s);
	n = strlen(s);
	for (i = 0; i < n; i++)
	{
		if (*(s + i) > *(s + i + 1))
			{
				t = s[i];
				s[i] = s[i + 1];
				s[i + 1] = t;
			}
	}
	cout << "Строка по возрастанию: ";
	for (i = 0; i < n; i++)
	{
		cout << s[i] << " ";
	}
		cout << endl;
	return 0;
}
