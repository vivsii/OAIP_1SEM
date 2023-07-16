#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    int A, p, n, razn;
    char s[33];
    cout << "Введите число" << endl;
    cin >> A;
    _itoa_s(A, s, 2);
    cout << s << endl;
    cout << "Введите начальную позицию" << endl;
    cin >> p;
    cout << "Введите число битов" << endl;
    cin >> n;
    razn = p - n;
    while (p >= razn)
    {
        A |= ~(0 << p);
        _itoa_s(A, s, 2);
        p--;
    }

    cout << s << endl;
    return 0;
}
