// firstprogect.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	
		double a, b, c;
		cout << "A =";
		cin >> a; //катет
		cout << "B =";
		cin >> b; //еще один
		c = sqrt(a *a + b *b); //гипотенуза
		cout << "C =";
		cout << c << endl;
		cout << "done";
		
		return 0;
					
	}

