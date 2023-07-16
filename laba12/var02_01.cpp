// 1. Даны массивы A и B, состоящие из n элементов. Построить массив S, каждый элемент которого равен сумме соответствующих элементов массивов A и B.
#include <iostream>
int main()
{
    using namespace std;
    setlocale(LC_ALL, "rus");
    const int N = 100;
    int A[N], B[N], S[N], n, *pA, *pB, *pS;
    cout << "Bведите n = ";
    cin >> n;
    srand((unsigned)time(NULL));

    cout << endl << "Mассив A: ";
    for (pA = A; pA < A + n; pA++)
    {
        *pA = rand() % 5;
        cout << *pA << " ";
    }

    cout << endl << "Mассив B: ";
    for (pB = B; pB < B + n; pB++)
    {
        *pB = rand() % 5;
        cout << *pB << " ";
    }

    cout << endl << "Mассив C: ";
    for (int i = 0; i < n; i++)
    {
        S[i] = A[i] + B[i];
        cout << S[i] << " ";
    }
}
