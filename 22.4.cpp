#include <iostream>
#include <string>

using namespace std;
int main()
{
	setlocale(0, "");
	string words;
	int min = -1;
	cout << "Введите строку слов разделённых пробелами -> ";
	getline(cin,words);
	for (int i = 0; i < words.size(); i++)
	{
		if (words[i] != ' ')//защита от неединичного пробела
		{
			int BuffMin = 0;
			while ((i + BuffMin < words.size()) && (words[i + BuffMin] != ' ')) 
			{
				BuffMin += 1;
			}
			if ((min == -1) || (BuffMin < min))
			{
				min = BuffMin;
			}
			i += BuffMin;
		}
	}
	cout << "Самое короткое слово длинной в " << min << " символа(ов)" << endl;
	system("pause");
	return 0;
}
