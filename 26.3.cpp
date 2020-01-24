#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int GetWordCount(string str)
{
	int counter = 0;
	for (int j = 0; j < str.size(); j++)
	{
		if (str[j] != ' ')//защита от неединичного пробела
		{
			int BuffMin = 0;
			while ((j + BuffMin < str.size()) && (str[j + BuffMin] != ' '))
			{
				BuffMin += 1;
			}
			j += BuffMin;
			counter++;
		}
	}
	return counter;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(0, "");
	cout << "Введите количество сток -> ";
	int size;
	cin >> size;
	//отчистка поока, без неё одна строка забирается
	cin.clear();
	while (cin.get() != '\n');
	//-=-=-=-=-=-=-=-=-
	string* arr = new string[size];
	cout << "Введите строки ->\n";
	for (int i = 0; i < size; i++)
	{
		getline(cin, arr[i]);
	}
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (GetWordCount(arr[j])>GetWordCount(arr[j+1]))
			{
				string buff = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = buff;
			}
		}
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}
