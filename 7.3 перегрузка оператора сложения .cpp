// ConsoleApplication27.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class Point {

private:
	int z;
	int t;

public:

	Point()
	{
		z = 0;
		t = 0;
		cout << this << "    constructor" << endl;
	}
	Point(int valueZ, int valueT)
	{
		z = valueZ;
		t = valueT;
		cout << this << "    constructor" << endl;
	}

	Point operator +(const Point &other)
	{
		Point temp;
		temp.z = this->z + other.z;
		temp.t = this->t + other.t;
		return temp;
	}
};

int main() {
	setlocale(LC_ALL, "ru");

	Point a(5, 1);
	Point b(8, 4);
	Point c = a + b;


	return 0;
}