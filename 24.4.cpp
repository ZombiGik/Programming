#include <iostream>

using namespace std;
int main()
{
	setlocale(0, "");
	cout << "Введите число от 1 до 27 -> ";
	int num;
	cin >> num;
	if (num < 1 || num > 27)
	{
		cout << "Некорректный ввод";
		exit;
	}
	for (int i = 100; i < 1000; i++)
	{
		if ((i % 10 + i / 10 % 10 + i / 100) == num)
		{
			cout << i << endl;
		}
	}
	system("pause");
	return 0;
}
