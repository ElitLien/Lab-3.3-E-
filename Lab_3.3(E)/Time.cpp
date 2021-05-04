////////////
// Time.cpp
////////////

#include "Time.h"
#include <iostream>
#include <sstream>

using namespace std;

void Time::Init(Triad dValue)
{
	setTriad(dValue);
}

void Time::Display() const
{
	t.Display();
}

void Time::Read()
{
	Triad tValue;

	tValue.Read();

	Init(tValue);
}

const string Time::toString()
{
	stringstream sout;

	sout << t.toString();

	return sout.str();
}

Time::Time(const int first, const int second, const int third)
	: t(first, second, third)
{}

Time::Time(const Time& s)
{
	t = s.t;
}

Time& Time::operator = (const Time& s)
{
	t = s.t;
	return *this;
}

ostream& operator << (ostream& out, const Time& s)
{
	out << string(s);
	return out;
}

istream& operator >> (istream& in, Time& s)
{
	cout << endl;
	cout << "t = ? "; in >> s.t;

	return in;
}

Time::operator string () const
{
	stringstream ss;
	return string(t) + ss.str();
}

Time& Time::operator ++ ()
{
	++t;
	return*this;
}

Time& Time::operator -- ()
{
	--t;
	return*this;
}

Time Time::operator ++ (int)
{
	Time s(*this);
	t++;
	return*this;
}

Time Time::operator -- (int)
{
	Time s(*this);
	t--;
	return*this;
}

Time::~Time(void)
{}

bool Time::h1(Time d) const
{
	return t.h1(d.getTriad());
}

bool Time::h2(Time d) const
{
	return t.h2(d.getTriad());
}

bool Time::m1(Time d) const
{
	return t.m1(d.getTriad());
}

bool Time::m2(Time d) const
{
	return t.m2(d.getTriad());
}

bool Time::s1(Time d) const
{
	return t.s1(d.getTriad());
}

bool Time::s2(Time d) const
{
	return t.s2(d.getTriad());
}

