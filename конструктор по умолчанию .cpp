// ConsoleApplication17.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class point
{
private:
	int x;
	int y;
public:
	point()
	{

	}
	void print() {
		cout << "x = " << x << " \t y = " << y << endl;
	}
};
int main()
{
	point a;
	a.print();
}

