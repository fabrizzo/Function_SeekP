// File_Open.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <cstdlib>
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "russian");

	ofstream out("test2.txt");
	if (!out) 
	{
		cout << "Файл вывода невозможно открыть\n";
		system("pause>nul");
		return 1;
	}
	char str[80];
	cout << "Вводите строки для окончания нажмите $\n";
	do
	{
		cout << ": ";
		cin >> str;
		out << str << endl;
	} while (*str != '$');
	out.close();
	system("pause>nul");
    return 0;
}

