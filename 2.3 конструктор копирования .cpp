// ConsoleApplication20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class MyClass
{
private:
	int size;
public:
	int*data;
	MyClass(int size)
	{
		this->size = size;
		this->data = new int[size];

		for (int i = 0; i < size; i++)
		{
			data[i] = i;
		}
		cout << "вызвался конструктор " << this << endl;
	};

	MyClass(const MyClass &other)

	{
		this->size = other.size;
		this->data = new int[other.size];

		for (int i = 0; i < other.size; i++)
		{
			this->data[i] = other.data[i];
		}
		cout << "Вызвался конструктор копирования " << this << endl;
	};

	~MyClass()
	{
		cout << "вызвался деструктор" << this << endl;
		delete[]data;

	};
};

int main() {
	setlocale(LC_ALL, "ru");

	MyClass a(10);
	MyClass b(a);

	return 0;
}

