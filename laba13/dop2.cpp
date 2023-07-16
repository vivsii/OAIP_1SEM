#include <iostream> 
using namespace std;
void main()
{
    char str1[256];
    char str2[256];
    unsigned int   i, k = 0;

    cout << "   Enter a string: ";
    gets_s(str1);

    for (i = 0; str1[i]; i++)
    {
        if (str1[i] == 'a') {
            str2[k] = str1[i];
            k++;
            str2[k] = '!';
            k++;
        }
        else   str2[k++] = str1[i];
    }
    str2[k] = '\0';
    cout << " Rezult : " << str2 << endl;
}
