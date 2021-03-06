// Dynamic_cast.cpp : Приведение типов обьектов родителя и наслед. классов
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>

using namespace std;
class Base
{
public:
	virtual void f()
	{
		cout << "Внутри класса Base\n";
	}
};

class Derived: public Base
{
public:
	void f()
	{
		cout << "Внутри класса Derived\n";
	}
};

int main()
{
	setlocale(LC_ALL, "russian");
	Base *bp, b_ob;
	Derived *dp, d_ob;

	dp = dynamic_cast<Derived *> (&d_ob);
	if (dp)
	{
		cout << "Тип Derived * к типу Derived * приведен успешно\n";
		dp->f();
	}
	else
		cout << "ошибка\n";
	cout << endl;

	bp = dynamic_cast<Base *> (&d_ob);
	if (bp)
	{
		cout << "Тип Derived * к типу Base * приведен успешно \n";
		bp->f();
	}
	else
		cout << "Ошибка \n";
	cout << endl;

	bp = dynamic_cast<Base *> (&b_ob);
	if (bp)
	{
		cout << "Тип Base * к типу Base * приведен успешно \n";
		bp->f();
	}
	else
		cout << "Ошибка \n";
	cout << endl;


	dp = dynamic_cast<Derived *> (&b_ob);
	if (dp)
	{
		cout << "Ошибка\n";
	}
	else
		cout << "Тип Base* к типу Derived * не приведен\n";
	cout << endl;

	bp = &d_ob;
	dp = dynamic_cast<Derived *>(bp);
	if (dp)
	{
		cout << "Сработало но это хитрушка";
		dp->f();
	}
	else
		cout << "Ошибка\n";
	cout << endl;

	bp = &b_ob;
	dp = dynamic_cast<Derived *>(bp);
	if (dp)
	{
		cout << "Ошибка\n";
	}
	else
	{
		cout << "Не приведен";
	}
	cout << endl;

	system("pause");
    return 0;
}

