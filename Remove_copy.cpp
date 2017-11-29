// Remove_copy.cpp : Генерация новой последовательности состоящую только из определенных фрагментов исходной.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");
	vector<int> v, v2(20);
	int i;

	for (i = 0; i < 20; i++)
	{
		if (i % 2) v.push_back(1);
		else v.push_back(2);
	}
	cout << "Производительность:  ";
	for (i = 0; i < v.size(); i++) cout << v[i] << " ";
	cout << endl;

	remove_copy(v.begin(), v.end(), v2.begin(), 1);
	cout << "Результат: ";
	for (i = 0; i < v2.size(); i++) cout << v2[i] << " ";
	cout << endl;

	
	
	
	system("pause");
	
	return 0;
}

