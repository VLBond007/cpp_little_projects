// cout words.cpp : эта прогррама считает слова пока не увидит слово done  с использованием string библиотеки 
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string words;
	string dones = "done";
	int count = 0;
	cin >> words;
	while (words != dones) {
		count++;
		cin >> words;
	}
	cout << count << " words";
}
