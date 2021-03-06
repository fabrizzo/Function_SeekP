// AbstractClass.cpp : Создание абстрактного класса. Виртуальная функция
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>

using namespace std;

class area
{
	double dim1, dim2, height; //размеры фигуры
public:
	void setarea(double d1, double d2, double h)
	{
		dim1 = d1;
		dim2 = d2;
		height = h;
	}
	void setarea(double d1, double d2)
	{
		dim1 = d1;
		dim2 = d2;
	}
	void setarea(double d1)
	{
		dim1 = d1;
	}
	void getdim(double &d1, double &d2, double &h)
	{
		d1 = dim1;
		d2 = dim2;
		h = height;
	}
	void getdim(double &d1, double &d2)
	{
		d1 = dim1;
		d2 = dim2;
	}
	void getdim(double &d1)
	{
		d1 = dim1;
	}
	virtual double getarea() = 0;
};
class trapeze : public area
{
public:
	double getarea()
	{
		double d1, d2, h;
		getdim(d1, d2, h);
		return 0.5*(d1+d2)*h;
	}
};
class circle : public area
{
public:
	double getarea()
	{
		const double pi = 3.1415;
		double d1;
		getdim(d1);
		return (d1*d1)*pi;
	}
};
class rectangle : public area
{
public:
	double getarea()
	{
		double d1, d2;
		getdim(d1, d2);
		return d1*d2;
	}
};
class square : public area
{
public:
	double getarea()
	{
		double d1;
		getdim(d1);
		return d1*d1;
	}
};
class triangle : public area
{
public:
	double getarea()
	{
		double d1, d2;
		getdim(d1, d2);
		return 0.5 * d1 * d2;
	}
};

int main()
{
	setlocale(LC_ALL, "russian");
	area *p;
	rectangle r;
	triangle t;
	square s;
	circle c;
	trapeze tr;
	r.setarea(3.3, 4.5);
	t.setarea(4.0, 5.0);
	s.setarea(4);
	c.setarea(3);
	tr.setarea(4.5, 6.0, 3.2);
	p = &r;
	cout << "Площадь прямоугольника: " << p->getarea() << "\n";
	p = &t;
	cout << "Площадь треугольника: " << p->getarea() << "\n";
	p = &s;
	cout << "Площадь квадрата: " << p->getarea() << "\n";
	p = &c;
	cout << "Площадь круга: " << p->getarea() << "\n";
	p = &tr;
	cout << "Площадь трапеции: " << p->getarea() << "\n";

	system("pause>nul");
    return 0;
}

