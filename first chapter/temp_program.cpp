// temp_program.cpp : программа переводит температуру из цельсия в фаренгейты
//

#include "pch.h"
#include <iostream>

double temperature(double);

int main()
{
	setlocale(0,"");
	using namespace std;
	cout << "Введите температуру в Цельсиях : ";
	double cel;
	cin >> cel;
	double far_temp = temperature(cel);
	cout << "Temperatura v Fareng : " << far_temp << endl;
	return 0;
}

double temperature(double cel_temp) {
	return 1.8 * cel_temp + 32;
 }
