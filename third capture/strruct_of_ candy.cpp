// strruct_of_ candy.cpp : созддаем стрктуру CandyBar и заполняем ее данными о названии, колориях и весе
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	struct CandyBar
	{
		string name;
		double weight;
		int kalor;
	};

	CandyBar snack{ "Mocha Moch",1.31,300 };

	cout << "Candy name: " << snack.name << endl;
	cout << snack.name << " weight: " << snack.weight << endl;
	cout << snack.name << " calory: " << snack.kalor << endl;
}

