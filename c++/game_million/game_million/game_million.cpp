// game_million.cpp: определяет точку входа для консольного приложения.
// rus_text.cpp: определяет точку входа для консольного приложения.

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
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
	cout << "мы рады приветствовать вас, ";
	cout << name.c_str();
	
	
	system("pause");
	return 0;
}