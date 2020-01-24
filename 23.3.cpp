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
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}
	//сортировка строк по их суммам в порядке убывания
	for (int i = 0; i < sizeX - 1; i++)
	{
		int FirstSumm = 0, SecondSumm = 0;
		for (int j = 0; j < sizeX - 1 - i; j++)
		{
			for (int Fi = 0; Fi < sizeY; Fi++)
			{
				FirstSumm += matrix[j][Fi];
			}
			for (int Si = 0; Si < sizeY; Si++)
			{
				SecondSumm += matrix[j + 1][Si];
			}
			if (FirstSumm < SecondSumm)
			{
				int* buff = matrix[j];
				matrix[j] = matrix[j + 1];
				matrix[j + 1] = buff;
			}
		}
	}
	cout << "Отсортированная матрица: " << endl;
	for (int i = 0; i < sizeX; i++)
	{
		for (int j = 0; j < sizeY; j++)
		{
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}
}
