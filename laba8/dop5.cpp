/*Последовательность а1, а2, ..., ak, называется пилообразной, если а1 < а2 > а3 < а4 > ... > ak
либо а1 > а2 < а3 > а4 < ...< ak. Проверить является ли заданная последовательность пилообразной*/
#include <iostream>
int main()
{
    int n, chislo;
    using namespace std;
    cout << "n = ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "chislo = ";
        cin >> chislo;
        if (chislo < 0 && i < n)
            cout << i << endl;
    }
	return 0;

}
