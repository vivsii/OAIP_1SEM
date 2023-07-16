/*1.	В заданной последовательности слов найти все слова, имеющие заданное окончание.*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    cout << "последовательность из 3 слов" << endl;

    char str1[256], str2[256], str3[256];
    cin >> str1 >> str2 >> str3;
    cout << "введите окончание" << endl;
    char end;
    cin >> end;



    if (str1[(strlen(str1) - 1)] == end)
    {
        cout << "слово(а) с окончанием: " << str1 << endl;
    }
    else if (str2[(strlen(str2) - 1)] == end)
    {
        cout << "слово(а) с окончанием: " << str2 << endl;
    }
    else if (str3[(strlen(str3) - 1)] == end)
    {
        cout << "слово(а) с окончанием: " << str3 << endl;
    }
    else
    {
        cout << "слов с заданным окончанием нет";
    }
    return 0;
}
