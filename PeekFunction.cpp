// PeekFunction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char ch;
	ofstream out("test", ios::out | ios::binary);
	if (!out)
	{
		cout << "File streamout cannot be opened\n";
		system("pause>nul");
		return 1;
	}
	char str[80], *p;

	out << 123 << "this is a test" << 23;
	out << "Hello there!" << 99 << "sdf" << endl;
	out.close();

	ifstream in("test", ios::in | ios::binary);

	if (!in)
	{
		cout << "File instream cannot be opened\n";
		system("pause>nul");
		return 1;
	}
	do
	{
		p = str;
		ch = in.peek();
		if (isdigit(ch))
		{
			while (isdigit(*p = in.get())) p++;
			in.putback(*p);
			*p = '\0';
			cout << "Celoe : " << atoi(str);
		}
		else if (isalpha(ch))
		{
			while (isalpha(*p = in.get())) p++;
			in.putback(*p);
			*p - '\0';
			cout << "Stroka :" << str;
		}
		else in.get();
		cout << "\n";
	} while (!in.eof());
	in.close();

	system("pause>nul");
	return 0;
}

