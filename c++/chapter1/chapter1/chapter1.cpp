// chapter1.cpp: ���������� ����� ����� ��� ����������� ����������.
#include "stdafx.h"
#include <iostream>
#include <clocale>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_CTYPE, "rus"); // ����� ������� ��������� ������
	cout << "��������� � �������\n";
	string yell = "������ ������������\n";
	cout << yell;
	cout << "\n";
	string dra = "�����, ���� ����, ������!!!";
	cout << dra << endl
		<< dra << endl
		<< dra << endl;
	string name;
	cout << endl << "��� ���� �����?" << endl;
	cin >> name;
	cout << "������, " << name << ". � ���� ������� � ����� � ����." << "��������?" <<endl;
	system("pause");
	int pir, aft;
	cout << "�� �����, � ������������"
		<< "�� �������� �������������" << endl
		<< "������ ��������� (��� 1996)"<<endl
		<< "������� � ����� �������-�������?" << endl;
	cin >> pir;
	aft = 1 + pir - 10;
		cout << "������ ���������, ���� ����, �� 10 ������� \n �������� ���� " << aft << " �������" << endl;
		cout << "��������� ������ ����������� 107 �����.\n ��� �� " << 107 / aft << " ����� �� �������" << endl;
		cout << "������ ���������� ����� ��-�� ���������� "<<(107 % aft)<<" �����";
		cin >> dra;
			
	
	
	system("pause");
	return 0;
}