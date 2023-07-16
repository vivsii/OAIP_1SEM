/* Дан массив A из n элементов и B из m элементов.Содержится ли наибольший элемент массива A в массиве B*/
#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "ru");
	srand((unsigned)time(NULL));
	const int n = 100, m = 100;
	int A[n], B[m], sizea, sizeb, maxA = 0, p = 0, *pA, *pB;
	cout << "Введите размер массива А: " ;
	cin >> sizea;
	for (pA = A; pA < A + sizea; pA++)
	{
		cin >> *pA;
	}
	cout << "A = { ";
	for (pA = A; pA < A + sizea; pA++)
		cout << *pA << " ";
	cout << "}" << endl;
	cout << "Введите размер массива B: ";
	cin >> sizeb;
	for (pB = B; pB < B + sizeb; pB++)
	{
		cin >> *pB;
	}
	cout << "B = { ";
	for (pB = B; pB < B + sizeb; pB++)
		cout << *pB << " ";
	cout << "}" << endl;
	for (pA = A; pA < A + sizea; pA++)
	{
		if (*pA > maxA)
			maxA = *pA;
	}
	cout << "Максимальный элемент в массиве А = " << maxA << endl;
	for (pB = B; pB < B + sizeb; pB++)
	{
		if (maxA == *pB)
			p++;
	}
	if (p > 0)
		cout << "Содержится";
	else
		cout << "Не содержится";
	return 0;
}
