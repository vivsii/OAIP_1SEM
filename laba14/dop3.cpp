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
