/*
1. Торговая фирма в первый день работы реализовала товаров на P тыс. руб., а затем ежедневно увеличивала выручку на 3%.
Какой будет выручка фирмы в тот день, когда она впервые превысит заданное значение Q?
Сколько дней придется торговать фирме для достижения этого результата?
*/
#include <iostream>
int main()
{
    using namespace std;
    setlocale(LC_ALL, "rus");
    float P, Q;
    int d = 1;
    cout << "введите сумму, на которую фирма реализовала товаров в первый день P = ";
    cin >> P;
    cout << "заданное значение Q = ";
    cin >> Q;
    while (P < Q)
    {
        P = P + (0.03 * P);
        d = d++;
    }
    P = P + (0.03 * P);
    cout << "Товаров на сумму = " << P << endl;
    cout << "Дней = " << d << endl;
    return 0;
}
