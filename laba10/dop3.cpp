/*
3. Найти в массиве наибольшее число подряд идущих одинаковых элементов.
*/
#include <iostream> 
#include <locale> 
using namespace std;
void main()
{
    setlocale(0, "");
    const int n = 100;
    int size, i, A[n], k = 0;
    cout << "размер массива: " << endl;
    cin >> size;
    srand((unsigned)time(NULL));
    for (i = 0; i < size; i++)
    {
        A[i] = rand() % n;
        cout << A[i] << " ";
        if (A[i] == A[i + 1])
            k++;
    }
    cout << endl << "количество подряд идущих элементов= " << k << endl;
}
