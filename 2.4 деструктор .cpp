// ConsoleApplication21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class myclass
{
public:
	myclass()
	{
		cout << "Вызвался конструктор" << endl;
	}
	~myclass()
	{
		cout << "Вызвался деструктор" << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "Rus");
	myclass a;
	return 0;
}
