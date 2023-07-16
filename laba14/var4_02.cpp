/*Задана числовая матрица размером nxm. 
Определить количество таких элементов матрицы, у которых в строке слева от элемента находятся числа, меньшие его, а справа – большие. */
#include<iostream>

int main()
{
	setlocale(LC_CTYPE, "ru");
	using namespace std;
	srand((unsigned)time(NULL));
	const int n = 100, m = 100;
	int A[n][m];
	int column, row, sum = 0, k = 0, count = 0, count1 = 0;
	float arifm;
	cout << "строка = ";
	cin >> row;
	cout << "столбец = ";
	cin >> column;

	srand((unsigned)time(NULL));

	for (int i = 0; i < row; i++)
	{
		cout << "\n";
		for (int j = 0; j < column; j++)
		{
			A[i][j] = rand() % 10;
			cout << A[i][j] << " ";
			sum += A[i][j];
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j > 0 && j < n)
			{
				if (A[i][j - 1]<A[i][j])
					count++;
			}
		}
	}
	cout << "\n Количество меньших слева = " << count;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j > 0 && j < n)
			{
				if (A[i][j + 1] > A[i][j])
					count1++;
			}
		}
	}
	cout << "\n Количество больших справа = " << count1;
	cout << endl;
	return 0;
}
