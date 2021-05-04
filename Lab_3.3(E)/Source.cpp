//////////////
// Source.cpp
//////////////

#include "Time.h"

using namespace std;

int main()
{
	Triad m1(2,6,8);
	cout << m1 << endl;
	cout << "count = " << Triad::Count() << endl;
	{
		Time s4(4,6,9);
		cout << s4 << endl;
		cout << "count = " << Time::Count() << endl;
	}
	cout << "count = " << Object::Count() << endl;

	Time::Triad t1, t2;

	t1.Read();
	t2.Read();
	t1.Display();

	cout << t2.toString() << endl;

	if (t1.h1(t2))
	{
		cout << "t1 < t2" << endl;
	}
	else if (t1.m1(t2))
	{
		cout << "t1 = t2" << endl;
	}
	else
	{
		cout << "t1 > t2" << endl;
	}

	Time d1, d2;

	d1.Init(t1);
	d2.Init(t2);
	d1.Display();

	cout << d2.toString() << endl;

	if (d1.h1(d2))
	{
		cout << "d1 < d2" << endl;
	}
	else if (d1.m1(d2))
	{
		cout << "d1 = d2" << endl;
	}
	else
	{
		cout << "d1 > d2" << endl;
	}

	return 0;
}
