// simpleCicle.cpp : выводит на в консоль все числа между one and two
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int one, two;
	cout << "Enter two number!" << endl;
	cout << "First number: ";
	cin >> one;
	cout << endl;
	cout << "Second number: ";
	cin >> two;
	cout << endl;
	
	for (; one < two; one++) {
		cout << one << endl; 
	}
}