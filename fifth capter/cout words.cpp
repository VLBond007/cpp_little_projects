// cout words.cpp : эта прогррама считает слова пока не увидит слово done
//

#include "pch.h"
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char words[100];
	char done[10] = "done";
	int count = 0;
	cin >> words;
	while (strcmp(words, done) != 0) {
		count++;
		cin >> words;
	}
	cout << count << " words";
}
