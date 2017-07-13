// game_million.cpp: определяет точку входа для консольного приложения.
// rus_text.cpp: определяет точку входа для консольного приложения.

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <string>
#include <clocale>
using namespace std;

int main(int argc, char* argv[])
{
	//setlocale(LC_CTYPE, "rus"); // вызов функции настройки локали
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	cout << "Кириллица в консоли\n";
	cout << "вас приветствует игра КТО ХОЧЕТ СТАТЬ МИЛЛИОНЕРОМ\nпредставтесь плжалуйста\n";
	string name = "";
	cin >> name;
	int money = 250;
	cout << "мы рады приветствовать вас, " << name << ". \n У тебя есть шанс стать миллионером.\n";
	cout << "первый вопрос. Какой индекс модели имеет девятка с длинным крылом? \n 21011 \n 21057 \n 21093 \n 21099\n";
	int model01;
	cin >> model01;
	if (model01 == 21093)
	{
		money = money * 2;
		cout << "Ваш выигрыш " << money << " рублей\n";
		cout << "Правильно. Следующий вопрос. \n Какой индекс имела ижевская четверка, с мордой и салоном от семерки?\n 21041\n 21044\n 21047\n 21074\n ";
		int model02;
		cin >> model02;
		if (model02 == 21047)
		{
			money = money * 2;
			cout << "Ваш выигрыш " << money << " рублей\n";
			cout << "Правильно. Следующий вопрос. \n Какой шильдик на двешке самый понтовый?\n 1.5\n 1.6i\n 16v\n ProSprot\n ";
			string model03;
			string answer = "16v";
			cin >> model03;
			if (model03 == answer)
			{
				money = money * 2;
				cout << "Ваш выигрыш " << money << " рублей\n";
				cout << "и последний вопрос.\n В какой году начался выпуск ГАЗ-3110?\n 1996\n 1997\n 1998\n 1999\n";
				int model04;
				cin >> model04;
				if (model04 == 1997)
				{
					money = money * 2;
					cout << "Благодарю за игру. Вы победили\n";
					cout << "Ваш выигрыш " << money << " рублей\n";
				}
				else cout << "вы проиграли\n";
				money = 0;
			}
			else cout << "вы проиграли\n";
			money = 0;
		}
		else cout << "вы проиграли\n";
		money = 0;
	}
	else cout << "вы проиграли\n";
	money = 0;
	system("pause");
	return 0;
}