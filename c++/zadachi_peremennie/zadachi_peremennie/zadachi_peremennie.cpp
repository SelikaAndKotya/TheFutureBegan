// zadachi_peremennie.cpp: ���������� ����� ����� ��� ����������� ����������.
//������ �� �����������  ��������� �.�.

#include "stdafx.h"
#include "math.h"
#include <iostream>
#include <clocale>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_CTYPE, "rus"); // ����� ������� ��������� ������
	cout << "��������� � �������\n";
	cout << "�������� ��������� �������� d. ��������� ������ s � �������� p\n";
	double d, s, p, a;//� - ������� ��������, ��������� �������
	cout << "d=";
	cin >> d;
	a = d / sqrt(2); 
	s = a *a; 
	p = 4 * a;
	//������� ������� �, ������� � ��������
	cout << "s=" << s << endl << "p=" << p<<endl;
	
	cout << "� ������������� ������������ �������� ����� b � ������� s. ����� ������ ����� a � �������� p"<<endl;
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
