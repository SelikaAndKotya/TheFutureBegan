// game_million.cpp: ���������� ����� ����� ��� ����������� ����������.
// rus_text.cpp: ���������� ����� ����� ��� ����������� ����������.

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <string>
#include <clocale>
using namespace std;

int main(int argc, char* argv[])
{
	//setlocale(LC_CTYPE, "rus"); // ����� ������� ��������� ������
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
	SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
	cout << "��������� � �������\n";
	cout << "��� ������������ ���� ��� ����� ����� �����������\n������������ ����������\n";
	string name = "";
	cin >> name;
	int money = 250;
	cout << "�� ���� �������������� ���, " << name << ". \n � ���� ���� ���� ����� �����������.\n";
	cout << "������ ������. ����� ������ ������ ����� ������� � ������� ������? \n 21011 \n 21057 \n 21093 \n 21099\n";
	int model01;
	cin >> model01;
	if (model01 == 21093)
	{
		money = money * 2;
		cout << "��� ������� " << money << " ������\n";
		cout << "���������. ��������� ������. \n ����� ������ ����� �������� ��������, � ������ � ������� �� �������?\n 21041\n 21044\n 21047\n 21074\n ";
		int model02;
		cin >> model02;
		if (model02 == 21047)
		{
			money = money * 2;
			cout << "��� ������� " << money << " ������\n";
			cout << "���������. ��������� ������. \n ����� ������� �� ������ ����� ��������?\n 1.5\n 1.6i\n 16v\n ProSprot\n ";
			string model03;
			string answer = "16v";
			cin >> model03;
			if (model03 == answer)
			{
				money = money * 2;
				cout << "��� ������� " << money << " ������\n";
				cout << "� ��������� ������.\n � ����� ���� ������� ������ ���-3110?\n 1996\n 1997\n 1998\n 1999\n";
				int model04;
				cin >> model04;
				if (model04 == 1997)
				{
					money = money * 2;
					cout << "��������� �� ����. �� ��������\n";
					cout << "��� ������� " << money << " ������\n";
				}
				else cout << "�� ���������\n";
				money = 0;
			}
			else cout << "�� ���������\n";
			money = 0;
		}
		else cout << "�� ���������\n";
		money = 0;
	}
	else cout << "�� ���������\n";
	money = 0;
	system("pause");
	return 0;
}