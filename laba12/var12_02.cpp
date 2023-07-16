/*
2. В одномерном массиве A найти номера всех элементов массива, которые равны, больше и меньше некоторого числа k.
*/
#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "ru");
	srand((unsigned)time(NULL));
	const int N = 100;
	int A[N], n, k, *pA;
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
	cout << "Введите число k: ";
	cin >> k;
	cout << "Номера элементов массива которые равно числу k = ";
	for (int i = 0; i < n; i++) {
		if (*(A + i) == k)
			cout << i << " ";
	}
	cout << endl;
	cout << "Номера элементов массива которые больше числа k = ";
	for (int i = 0; i < n; i++) {
		if (*(A + i) > k)
			cout << i << " ";
	}
	cout << endl;
	cout << "Номера элементов массива которые меньше числа k = ";
	for (int i = 0; i < n; i++) {
		if (*(A + i) < k)
			cout << i << " ";
	}
	cout << endl;
	return 0;
}
