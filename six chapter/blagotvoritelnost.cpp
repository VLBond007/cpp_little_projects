// blagotvoritelnost.cpp : ввод в массив данных

#include "pch.h"
#include <iostream>

using namespace std;

const int max = 10;

int main()
{
	double mass[max];
	int i = 0;
	float temp = 0;
	double total = 0;
	cout << "Value#1 : ";
	while (i < max && cin >> mass[i]) {
		if (++i < max)
			cout << "Value#" << i + 1 << " : ";
	}
	for (int j = 0; j < i; j++) {
		total += mass[j];
	}
	if (i == 0) {
		cout << "No value!" << endl;
	}
	cout << total / i << " avereng weight of " << i << " fish";
}

