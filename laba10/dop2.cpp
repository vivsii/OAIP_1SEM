/*
2.  Подсчитать количество пар соседних элементов массива с одинаковыми значениями.
*/
#include <iostream>
#include <locale>
int main()
{
    using namespace std;
    setlocale(LC_ALL, "rus");
    const int n = 100;
    int size, i, A[n], k = 0;
    cout << "размер массива: " << endl;
    cin >> size;
    srand((unsigned)time(NULL));
    for (int i = 0; i < size; i++)
    {
        A[i] = rand() % 10;
        cout << A[i] << " ";
        if (A[i] == A[i + 1])
            k++;
    }
    cout << endl << "количество пар соседних элементов массива = " << (k / 2) << endl;
}
