/*1. Написать программу, которая удаляет в строке все буквы b в тексте, написанном латинскими буквами.*/
#include <cstring>
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "ru");
    char s, t[100];
    int i, n;
    cout << "Введите строку";
    gets_s(t);
    cout << "Ввведите символ";
    cin >> s;
    n = strlen(t);
    for (i = 0; i <= n; i++)
        if (t[i] == s)
                t[i] = ' ';
    for (i = 0; i < n; i++)
        cout << t[i];
}
