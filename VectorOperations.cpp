// VectorOperations.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	vector<int> v;
	int i;
	cout << "Размер = " << v.size() << endl;
	for (i = 0; i < 10; i++) v.push_back(i);

	cout << "Новый размер = " << v.size() << endl;
	cout << "Текущее содержимое: \n";
	for (i = 0; i < v.size(); i++) cout << v[i] << " ";
	cout << endl;

	for (i = 0; i < 10; i++) v.push_back(i+10);
	cout << "Новый размер = " << v.size() << endl;
	cout << "Текущее содержимое: \n";
	for (i = 0; i < v.size(); i++) cout << v[i] << " ";
	cout << endl;
	for (i = 0; i < v.size();i++) v[i] = v[i] * v[i];
	cout << "Квадраты: \n";
	for (i = 0; i < v.size(); i++) cout << v[i] << " ";
	cout << endl;
	v.pop_back();
	cout << "Без последнего элемента: \n";
	for (i = 0; i < v.size(); i++) cout << v[i] << " ";
	cout << endl;
	if (v.empty())
	{
		cout << "Вектор пуст\n";
	}
	else
	{
		cout << "Вектор не пуст\n";
	}
	v.clear();
	cout << "Новый размер = " << v.size() << endl;
	if (v.empty())
	{
		cout << "Вектор пуст\n";
	}
	else
	{
		cout << "Вектор не пуст\n";
	}











	system("pause");
    return 0;
}

