/*
Определить наименьшее натуральное число, отсутствующее в последовательности из n натуральных чисел.
*/
#include <iostream>
int main()
{
    setlocale(LC_ALL, "rus");
    using namespace std;
    const int N = 100;
    int A[N], * pA, size, min = 100;
    cout << "Pазмер массива: ";
    cin >> size;
    for (pA = A; pA < size + A; pA++)
    {
        cin >> *pA;
        if (*pA > 0)
        {
            if (*pA < min)
            {
                min = *pA;
            }
        }
    }
    cout << "Mинимальный элемент: " << min;
}
