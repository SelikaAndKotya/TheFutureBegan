// chapter1.cpp: определяет точку входа для консольного приложения.
#include "stdafx.h"
#include <iostream>
#include <clocale>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_CTYPE, "rus"); // вызов функции настройки локали
	cout << "Кириллица в консоли\n";
	string yell = "дракон приближается\n";
	cout << yell;
	cout << "\n";
	string dra = "Ололо, пыщь пыщь, дрокон!!!";
	cout << dra << endl
		<< dra << endl
		<< dra << endl;
	string name;
	cout << endl << "как тебя зовут?" << endl;
	cin >> name;
	cout << "Привет, " << name << ". Я хочу сыграть с тобой в игру." << "Согласна?" <<endl;
	system("pause");
	int pir, aft;
	cout << "ты пират, и разгуливаешь"
		<< "по кишащему преступниками" << endl
		<< "городу Ковылкино (год 1996)"<<endl
		<< "Сколько с тобой дружков-пиратов?" << endl;
	cin >> pir;
	aft = 1 + pir - 10;
		cout << "Пришли мушкетеры, пыщь пыщь, по 10 умирают \n Осталось лишь " << aft << " пиратов" << endl;
		cout << "состояние убитых насчитывает 107 монет.\n Это по " << 107 / aft << " монет на каждого" << endl;
		cout << "пираты устраивают драку из-за оставшихся "<<(107 % aft)<<" монет";
		cin >> dra;
			
	
	
	system("pause");
	return 0;
}