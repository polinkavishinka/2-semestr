#include "stdafx.h"
#include <iostream>
using namespace std;

class Time    // ������� �����
{
protected:         // ������������ ������� � �������� value
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
	Time(int h, int m)//����������� � �����������
	{
		HH = h;
		MM = m;
	}
	Time()//����������� �� ���������
	{
		HH = 0;
		MM = 0;
	}

	Time(Time* a)//����������� �����������
	{
		this->HH = a->HH;
		this->MM = a->MM;
	}
	~Time()
	{
		cout << "��������� �������� �������" << endl;
	}
	virtual void Print()
	{
		cout << HH << ":" << MM << endl;
	}
	//virtual void func() = 0;
	// ���������������
	friend class Display;
	friend std::ostream& operator<< (std::ostream &out, const Time &dd);
	friend std::istream& operator >> (std::istream &in, Time &dd);

	// ���������� ��������� ������������
	Time& operator= (const Time &dd)
	{
		// ��������� ����������� ��������
		HH = dd.HH;
		MM = dd.MM;
		// ���������� ������� ������, ����� �� ����� ������� � ������� ���������� ���������� �������� ������������
		return *this;
	}
	class InClass;
};

class Time::InClass { //�������� ���������� ������

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
class TimeDetails : public Time   // ����������� �����
{
private:
	int SS;
public:
	TimeDetails(int h, int m, int s) : Time(h, m)   // inputS ���������� � ����������� � ���������� ������ FirstClass
	{
		SS = s;
	}

	void Print() //�����������
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
	//����
	cin >> vv;
	//�����
	cout << vv << endl;
	Display::Print(cl);
	cl.Print();
	TimeDetails cl2(12, 30, 20);
	cl2.Print();
	system("pause");
	return 0;
}