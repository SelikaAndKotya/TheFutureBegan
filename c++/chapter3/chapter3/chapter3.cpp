// rus_text.cpp: определяет точку входа для консольного приложения.

#include "stdafx.h"
#include <iostream>
#include <clocale>
using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_CTYPE, "rus"); // вызов функции настройки локали
	cout << "Кириллица в консоли\n";
	//работа с константами, длина окружности и площадь круга
	typedef float f;
	const f pi = 3.141592;
	f r, l, s;
	//радиус, длина и площадь
	cout << "введите радиус\n R=";
	cin >> r;
	l = pi * 2 * r;
	s = pi*r*r;
	cout << "длина окружности равна " << l << "\n площадь круга равна " << s << endl;
	
	
	system("pause");
	return 0;
}