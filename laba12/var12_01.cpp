/*
1. Заданы два массива A и B, каждый из n элементов. Подсчитать количество таких чисел k, для которых: A[k] = B[k], A[k] > B[k] и A[k] < B[k].
*/
#include <iostream>
int main() 
{
	using namespace std;
	setlocale(LC_CTYPE, "ru");
	srand((unsigned)time(NULL));
	const int N = 100;
	int A[N], B[N], n, *pA, *pB, m=0, l=0, p=0;
	cout << "Введите размер массива А: ";
	cin >> n;
	for (pA = A; pA < A + n; pA++)
	{
		*pA = rand() % n;
	}
	cout << "A = { ";
	for (pA = A; pA < A + n; pA++)
		cout << *pA << " ";
	cout << "}" << endl;
	for (pB = B; pB < B + n; pB++)
	{
		*pB = rand() % n;
	}
	cout << "B = { ";
	for (pB = B; pB < B + n; pB++)
		cout << *pB << " ";
	cout << "}" << endl;
	cout << "Количество равных чисел = ";
	for (int k = 0; k < n; k++)
	{
		if (*(A + k) == *(B + k))
			p++;
	}
	if (p > 0)
		cout << p << endl;
	cout << "Количество чисел меньше = ";
	for (int k = 0; k < n; k++)
	{
		if (*(A + k) < *(B + k))
			m++;
	}
	if (m > 0)
		cout << m << endl;
	cout << "Количество чисел больше = ";
	for (int k = 0; k < n; k++)
	{
		if (*(A + k) > *(B + k))
			l++;
	}
	if (l > 0)
		cout << l;
	return 0;
}
