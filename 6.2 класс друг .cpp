// ConsoleApplication26.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class something;

class someting2
{
public:
	someting2(string n)
	{
		name = n;
	}
	void drive(something &a);
	void setPrice(something &a, int price);

private:
	string name;
};

class something
{
	friend class someting2;
public:
	something(string sName, int sPrice)
	{
		name = sName;
		price = sPrice;
	}
	string getName() { return name; }
	int getPrice() { return price; }

private:
	string name;
	int price;
};

void someting2::drive(something &a)
{
	cout << name << " зачем-то " << a.name << endl;
}
void someting2::setPrice(something &a, int price)
{
	if (price > 0)
		a.price = price;
}

int main()
{
	setlocale(LC_ALL, "Rus");

	something who("что-то", 5000);
	someting2 tom("Кто-то");
	tom.drive(who);
	tom.setPrice(who, 007);
	cout << who.getName() << " : " << who.getPrice() << endl;

	return 0;
}

