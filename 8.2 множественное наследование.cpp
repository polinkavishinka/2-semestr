// ConsoleApplication27.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class tomato
{
public:

	void first()
	{
		cout << "помидор + ";
	}
};
class cucumber
{
public:

	void second()
	{
		cout << "огурец" << endl;
	}
};
class salad : public tomato, public cucumber
{

};
int main()
{
	setlocale(LC_ALL, "ru");

	salad fc;
	fc.first();
	fc.second();
	return 0;
}