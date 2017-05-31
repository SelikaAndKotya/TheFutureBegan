// zadachi_peremennie.cpp: определяет точку входа для консольного приложения.
//задачи из самоучителя  Алексеева Е.Р.

#include "stdafx.h"
#include "math.h"
#include <iostream>
#include <clocale>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_CTYPE, "rus"); // вызов функции настройки локали
	cout << "Кириллица в консоли\n";
	cout << "Известна диагональ квадрата d. Вычислить Площдь s и периметр p\n";
	double d, s, p, a;//а - сторона квадрата, остальное понятно
	cout << "d=";
	cin >> d;
	a = d / sqrt(2); 
	s = a *a; 
	p = 4 * a;
	//находим сторону а, площадь и периметр
	cout << "s=" << s << endl << "p=" << p<<endl;
	
	cout << "В прямоугольном треугольнике известен катет b и площадь s. Найти второй катет a и периметр p"<<endl;
	double b;
	cout << "b="; 
	cin >> b;
	cout << "s="; 
	cin >> s;
	a = s * 2 / b, p = a + b + (sqrt(a *a + b *b));
	cout << "a=" << a << endl << "p=" << p << endl;
	
	system("pause");
		return 0;
}
