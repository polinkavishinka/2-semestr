// ConsoleApplication22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class point
{
public:
	int a;
	void print() {
		cout << "b = " << b << "\na = " << a << "\n" << "c= " << c << endl;
		printg();
	}
private:
	int b;
	void printg() {
		cout << "Что-то вышло )))" << endl;
	}
protected:
	int c;

};
int main()
{
	setlocale(LC_ALL, "ru");
	point d;
	d.print();
	return 0;
}
