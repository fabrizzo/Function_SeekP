// RdState.cpp : Копирование одного текстового файла в другой с верхним регистром.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
	
	ifstream in("test.txt");
	ofstream out("test2.txt");
	if (!in)
	{
		cout << "Cannot open file\n";
	}
	char c;
	char r;
	while (in.get(c)) {
		cout << c <<" to file -";
		r = toupper(c);
		out << r;
		cout << r << endl;
	}
	in.close();
	system("pause>nul");
    return 0;
}


