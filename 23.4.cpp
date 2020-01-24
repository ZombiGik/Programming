#include <iostream>
#include <string>
#include <windows.h>

using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(0, "");
	string words;
	int KNwords = 0;
	cout << "Введите строку слов разделённых пробелами -> ";
	getline(cin, words);
	for (int i = 0; i < words.size(); i++)
	{
		if (words[i] != ' ')//защита от неединичного пробела
		{
			int Buff = 0;
			while ((i + Buff < words.size()) && (words[i + Buff] != ' '))
			{
				Buff += 1;
			}
			if (((words[i] == 'к') ||(words[i] == 'К'))&&((words[i + Buff - 1] == 'Н') || (words[i + Buff - 1]=='н')))
			{
				KNwords++;
			}
			i += Buff;
		}
	}
	cout << "Слов начинающихся на 'к' и заканчивающихся на 'н' найдено: " << KNwords << endl;
	system("pause");
	return 0;
}
