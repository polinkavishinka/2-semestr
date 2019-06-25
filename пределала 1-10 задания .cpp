#include "stdafx.h"
#include <iostream>
using namespace std;

class Time    // базовый класс
{
protected:         // спецификатор доступа к элементу value
	int HH;
	int MM;
public:
	static int CountDaysInYear()
	{
		return 365;
	}
	int GetHH()
	{
		return HH;
	}
	void SetHH(int h)
	{
		HH = h;
	}
	int GetMM()
	{
		return MM;
	}
	void SetMM(int m)
	{
		MM = m;
	}
	Time(int h, int m)//конструктор с параметрами
	{
		HH = h;
		MM = m;
	}
	Time()//конструктор по умолчанию
	{
		HH = 0;
		MM = 0;
	}

	Time(Time* a)//конструктор копировани€
	{
		this->HH = a->HH;
		this->MM = a->MM;
	}
	~Time()
	{
		cout << "ѕроизошло удаление объекта" << endl;
	}
	virtual void Print()
	{
		cout << HH << ":" << MM << endl;
	}
	//virtual void func() = 0;
	// дружественность
	friend class Display;
	friend std::ostream& operator<< (std::ostream &out, const Time &dd);
	friend std::istream& operator >> (std::istream &in, Time &dd);

	// ѕерегрузка оператора присваивани€
	Time& operator= (const Time &dd)
	{
		// выполн€ем копирование значений
		HH = dd.HH;
		MM = dd.MM;
		// возвращаем текущий объект, чтобы мы могли св€зать в цепочку выполнение нескольких операций присваивани€
		return *this;
	}
	class InClass;
};

class Time::InClass { //описание вложенного класса

};




ostream& operator<< (std::ostream &out, const Time &d)
{
	out << d.HH << ":" << d.MM;

	return out;
}


std::istream& operator >> (std::istream &in, Time &dd)
{
	in >> dd.HH;
	in >> dd.MM;
	return in;
}

class Display
{

public:
	static void Print(Time &v)
	{
		cout << v.HH << ":" << v.MM << endl;
	}
};
class TimeDetails : public Time   // производный класс
{
private:
	int SS;
public:
	TimeDetails(int h, int m, int s) : Time(h, m)   // inputS передаетс€ в конструктор с параметром класса FirstClass
	{
		SS = s;
	}

	void Print() //полиморфизм
	{
		cout << HH << ":" << MM << ":" << SS << endl;
	}

	void func()
	{

	}

	class MlSec
	{
	public:
		MlSec();
		~MlSec();
		int mlsec;
	private:

	};

};

TimeDetails operator + (TimeDetails c1, TimeDetails c2)
{
	return TimeDetails(c1.GetHH() + c2.GetHH(), c1.GetMM() + c2.GetMM(), 0);
}

int main()
{
	TimeDetails cl(12, 30, 45);
	Time vv;
	//¬вод
	cin >> vv;
	//¬ывод
	cout << vv << endl;
	Display::Print(cl);
	cl.Print();
	TimeDetails cl2(12, 30, 20);
	cl2.Print();
	system("pause");
	return 0;
}