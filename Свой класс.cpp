// ConsoleApplication15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
class human
{
public:
	int age;
	double weight;
	string name;
};
int main()
{
	setlocale(LC_ALL, "Rus");
	human firsthuman;
	firsthuman.age = 16;
	firsthuman.weight = 47;
	firsthuman.name = "Саня";


	cout << firsthuman.age << endl;
	cout << firsthuman.weight << endl;
	cout << firsthuman.name << endl << endl;
	human secondhuman;
	secondhuman.age = 27;
	secondhuman.weight = 73;
	secondhuman.name = "Александр";
	cout << secondhuman.age << endl;
	cout << secondhuman.weight << endl;
	cout << secondhuman.name << endl << endl;
	human thirdhuman;
	thirdhuman.age = 44;
	thirdhuman.weight = 75;
	thirdhuman.name = "Александр Сергеевич";
	cout << thirdhuman.age << endl;
	cout << thirdhuman.weight << endl;
	cout << thirdhuman.name << endl;
}

