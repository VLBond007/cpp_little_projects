// converts futs.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

using namespace std;

int duimTofoot(int);

int main()
{
	int futs, duim, ostatokOtDuim;
	cout << "Enter the tall in duim: ";
	cin >> duim;
	ostatokOtDuim = duim%12;
	futs = duimTofoot(duim);	
	cout << endl;
	cout << "Your tall in fut and duim : " << futs << "," << ostatokOtDuim;

}

int duimTofoot(int a)
{
	return a / 12;
}

