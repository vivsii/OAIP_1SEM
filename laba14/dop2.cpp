/*Путем перестановки элементов квадратной вещественной матрицы добиться того, 
чтобы ее максимальный элемент находился в левом верхнем углу, следующий по величине  в позиции (2, 2), 
следующий  в позиции (3, 3) и т. д., заполнив таким обра-зом всю главную диагональ.
*/
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Ru");
    int i, j, k, n;
    int arr[10][10], max = 0, imax = 0, jmax = 0;
    cout << "Введите размерность квадратной матрицы(n): " << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "Введите элемент матрицы:" << endl;
            cin >> arr[i][j];
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                imax = i;
                jmax = j;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    arr[imax][jmax] = arr[0][0];
    arr[0][0] = max;

    for (int d = 1; d < n; d++)
    {
        max = arr[0][1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (((i != j) || ((i >= d) && (j >= d))) && (arr[i][j] > max))
                {
                    max = arr[i][j];
                    imax = i;
                    jmax = j;
                }
            }
        }
        arr[imax][jmax] = arr[d][d];
        arr[d][d] = max;
    }



    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
