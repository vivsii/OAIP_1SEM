/* 4. В последовательности найти число чередований знака, т. е. число переходов с минуса на плюс или с плюса на минус*/
#include <iostream>
int main()
{
    using namespace std;
    setlocale(LC_ALL, "rus");
    int chislo, chislo1, n, max = 0;
    cout << "введите количество чисел в последовательности: " << endl;
    cin >> n;
    cout << "число: " << endl;
    cin >> chislo;
    for (int i = 1; i < n; i++)
    {
        chislo1 = chislo;
        cin >> chislo;
        if (((chislo > 0) && (chislo1 < 0)) || ((chislo < 0) && (chislo1 > 0)))
            max++;
    }
    cout << "знак меняется " << max << " раз";
    return 0;
}
