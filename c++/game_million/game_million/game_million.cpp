// game_million.cpp: ���������� ����� ����� ��� ����������� ����������.
// rus_text.cpp: ���������� ����� ����� ��� ����������� ����������.

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
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
	cout << "�� ���� �������������� ���, ";
	cout << name.c_str();
	
	
	system("pause");
	return 0;
}