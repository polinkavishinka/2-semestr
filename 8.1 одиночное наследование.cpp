// ConsoleApplication27.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class food
{
public:
	string name;
};

class vegetable :public food
{
public:
	string group;
	void learn()
	{
		cout << "Я овощь " << endl;
	}
};

class whichone :public	vegetable
{
public:
	void learn()
	{
		cout << "Расту на кусте " << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "ru");
	vegetable st;
	st.learn();
	whichone extrast;
	extrast.learn();
	return 0;

}