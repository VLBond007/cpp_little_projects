// copy_past.cpp : программа собирает с двух строк информацию и копирует в одну
//

#include "pch.h"
#include <iostream>
#include <cstring>



using namespace std;

int main()
{
	char f_name[20], l_name[20], allInOne[40]; // создаем масивы символов тобишь строки 
	cout << "Enter your first name: ";
	cin.getline(f_name, 20); // записываем введеное значение в массив символов
	cout << "Enter your last name: ";
	cin.getline(l_name, 20);
	strcpy_s(allInOne, l_name);// копируем значение в фамилия в " все в одной строке"
	strcat_s(allInOne, ", ");
	strcat_s(allInOne, f_name);// вставляем имя после фамилии 
	cout << "Here is information in a single string: " << allInOne;
}

