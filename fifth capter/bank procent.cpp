// bank procent.cpp : программа показывает за сколько лет у клео станет денег больше чем у даны    
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	double dana, kleo;
	dana = 110; // 10% простых процентов в банке, 10 долларов каждый год не зависимо от суммы 
	kleo = 105; // 5% сложных процентов в банке, 5% начисляется от всей суммы
	double kleo_pribl = 0.05;


	for (int i = 1; dana > kleo; i++)
	{
		dana +=10;
		double temp = kleo_pribl * kleo;
		kleo += temp;
		cout << "Year: " << i << "  Dana: " << dana
			<< "   Kleo: " << kleo << endl;
	}
}

