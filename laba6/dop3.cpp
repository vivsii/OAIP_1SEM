/*
3. Дана последовательность ненулевых целых чисел, которая заканчивается числом 0.
Определить, сколько раз в этой последовательности меняется знак.
*/
#include <iostream>
int main()
{
    using namespace std;
    setlocale(LC_ALL, "rus");
    int chislo, chislo1, i = 0;
    cout << "введите число: " << endl;
    cin >> chislo;
    while (chislo != 0)
    {
        chislo1 = chislo;
        cin >> chislo;
        if (((chislo > 0) && (chislo1 < 0)) || ((chislo < 0) && (chislo1 > 0))) i++;
    }
    cout << "знак меняется " << i << " раз";
    return 0;
}
