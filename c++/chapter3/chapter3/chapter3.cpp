// rus_text.cpp: ���������� ����� ����� ��� ����������� ����������.

#include "stdafx.h"
#include <iostream>
#include <clocale>
using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_CTYPE, "rus"); // ����� ������� ��������� ������
	cout << "��������� � �������\n";
	//������ � �����������, ����� ���������� � ������� �����
	typedef float f;
	const f pi = 3.141592;
	f r, l, s;
	//������, ����� � �������
	cout << "������� ������\n R=";
	cin >> r;
	l = pi * 2 * r;
	s = pi*r*r;
	cout << "����� ���������� ����� " << l << "\n ������� ����� ����� " << s << endl;
	
	
	system("pause");
	return 0;
}