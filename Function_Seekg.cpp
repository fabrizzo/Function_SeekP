// Function_Seekg.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

void ReverseName(char *s);


int main()
{
	ifstream in("test.txt", ios::in | ios::binary);
	if (!in)
	{
		cout << "Cannot open file\n";
		return 1;
	}
	in.seekg(0, ios::end);
	int length = in.tellg();
	in.seekg(0, ios::beg);
	char *buffer = new char[length];
	in.read(buffer, length);
	in.close();
	ReverseName(buffer);
	system("pause>nul");
    return 0;
}

void ReverseName(char * s) {

	if (*s) {
		ReverseName(s + 1);
		cout << *s;
	}

	return;
}