// TryCatch.cpp : Система обработки исключительных ситуаций
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Начало\n";
	try 
	{
		cout << "Внутри блока try\n";
		throw 10;
		cout << "Эта инструация выполнена не будет";
	}
	catch (int i)
	{
		cout << "Перехват номер ошибки\n";
		cout << i << "\n";
	}
	cout << "THe End";


	system("pause");
    return 0;
}

