#include <iostream>

using namespace std;
int main()
{
	int sizeX, sizeY, num;
	setlocale(0, "");
	cout << "Укажите размер матрицы -> ";
	cin >> sizeX >> sizeY;
	//создание двумерного массива
	int** matrix = new int* [sizeX];
	for (int i = 0; i < sizeX; i++)
	{
		matrix[i] = new int[sizeY];
	}
	cout << "Введите матрицу построчно -> ";
	//заполнение массива
	for (int i = 0; i < sizeX; i++)
	{
		for (int j = 0; j < sizeY; j++)
		{
			cin >> matrix[i][j];
		}
	}
	//вывод матрици на экран
	cout << "матрица: " << endl;
	for (int i = 0; i < sizeX; i++)
	{
		for (int j = 0; j < sizeY; j++)
		{
			cout << matrix[i][j] << '\t';
		}
		cout << endl;
	}

	for (int j = 0; j < sizeY; j++)
	{
		int summ = 0;
		for (int i = 0; i < sizeX; i++)
		{
			summ += matrix[i][j];
		}
		cout << "Сумма " << j + 1 << " столбца = " << summ << endl;
	}
}
