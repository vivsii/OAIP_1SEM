/*3. Отредактировать заданное предложение, удаляя из него все слова с нечетными номерами и переворачивая слова с четными номерами*/
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
#include <string.h>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "ru");
    const int N = 100;
    char str[N];
    cout << "Enter string: ";
    cin.getline(str, N);
    unsigned int m;
    m = strlen(str);
    for (int i = m - 1; i >= 0; i--)
    {
        cout << str[i];
        if (str[i] == ' ')
        {
            i--;
            while (str[i] != ' ')
            {
                i--;
            }
        }
    }
    return 0;
}
