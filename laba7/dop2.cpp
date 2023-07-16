/*Составить алгоритм, определяющий, сколько существует способов набора одного рубля при помощи монет достоинством 50 коп., 20 коп., 5 коп. и 2 коп.*/
#include <iostream>
int main() {
    setlocale(LC_CTYPE, "ru");
    using namespace std;
    int kolvo = 0, kop1 = 0, kop2 = 0, kop3 = 0, kop4 = 0, max = 100;
    for (kop1; kop1 <= 50; kop1++)
    {
        for (kop2 = 0; kop2 <= 20; kop2++)
        {
            for (kop3 = 0; kop3 <= 5; kop3++)
            {
                for (kop4 = 0; kop4 <= 2; kop4++)
                {
                if (max == (kop1 * 2 + kop2 * 5 + kop3 * 20 + kop4 * 50))
                    kolvo++;
                }
            }
        }
    }
    cout << "Количество способов " << kolvo;
     return 0;
}
