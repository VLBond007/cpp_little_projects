// ProcentOfPopulation.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	long double all_population, population_country;
	double total;
	string country;
	cout << "Enter the country : ";
	getline(cin, country);
	cout << "Enter the population of the " << country << " : ";
	cin >> population_country;
	cout << endl;
	cout << "Enter the population of the World : ";
	cin >> all_population;
	cout << endl;
	total = (population_country / all_population);
	total *= 100;
	cout << "The population of the US is " << total << " % of the world population.";

}

