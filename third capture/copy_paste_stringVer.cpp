// copy_paste_stringVer.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1, str2, str3;
	cout << "Enter your first name: ";
	getline(cin, str1);
	cout << "Enter your last name: ";
	getline(cin, str2);
	cout << "This is two str in one: ";
	str3 = str2 + ", " + str1;
	cout << str3;

}
