#include <iostream>

using namespace std;
int main()
{
	int size, num;
	setlocale(0, "");
	cout << "Укажите порядок квадратной матрицы -> ";
	cin >> size;
	//создание двумерного массива
	int** matrix = new int*[size];
	for (int i = 0; i < size; i++)
	{
		matrix[i] = new int[size];
	}
	cout << "Введите матрицу построчно -> ";
	//заполнение массива
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> matrix[i][j];
		}
	}
	//вывод матрици на экран
	cout << "матрица: " << endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}

	int PrimaryDiagonal = 0, SecondaryDiagonal = 0;
	//вычисление суммы главной диагонали
	for (int i = 0; i < size; i++)
	{
		PrimaryDiagonal += matrix[i][i];
	}
	//вычисление суммы побочной диагонали
	for (int i = 0; i < size; i++)
	{
		SecondaryDiagonal += matrix[i][size - 1 - i];
	}
	cout << "Главная диагональ = " << PrimaryDiagonal << "\nПобочная диагональ = " << SecondaryDiagonal << endl;
	system("pause");
	delete[] matrix;
	return 0;
}
