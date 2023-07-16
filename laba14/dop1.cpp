/*Латинским квадратом порядка n называется квадратная таблица размером nхn, 
каждая строка и каждый столбец которой со-держат все числа от 1 до n. Для заданного n в матрице L(n, n) построить латинский квадрат порядка n. 
*/
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    int L[32][32];
    int n;
    cout << "Введите n - ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            L[i][j] = 1 + (j + 1 + i + 1) % n;
            cout << " " << *(*(L + i) + j);
            if (j == n - 1)
            {
                printf("\n");
            }

        }
    }
    return 0;
}
