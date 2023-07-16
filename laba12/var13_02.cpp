/*Разделить массив на две части, поместив в первую элементы, меньшие среднего арифметического их суммы, а во вторую - большие.*/
#include <iostream>
int main() {
	setlocale(LC_CTYPE, "ru");
	using namespace std;
	const int N = 100;
	int A[N], n, *pA, s = 0, a;
	cout << "Введите размер массива A: ";
	cin >> n;
	for (pA = A; pA < A + n; pA++)
	{
		*pA = rand() % n;
	}
	cout << "A = { ";
	for (int i = 0; i < +n; i++)
	{
		cout << A[i] << " ";
	}
	cout << "}" << endl;
	for (int i = 0; i < n; i++)
	{
		s += *(A + i);
	}
	a = s / n;
	cout << "Среднее арифметическое = " << a ;
	cout << endl;
	cout << "Числа меньше среднего арифметического = { ";
	for (pA = A; pA < A + n; pA++)
	{
		if(*pA < a)
		cout << *pA << " ";
	}
	cout << "}" << endl;
	cout << "Числа больше среднего арифметического = { ";
	for (pA = A; pA < A + n; pA++)
	{
		if (*pA > a)
			cout << *pA << " ";
	}
	cout << "}" << endl;
}
