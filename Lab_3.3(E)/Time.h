//////////
// Time.h
//////////

#pragma once
#include <string>
#include "Triad.h"

using namespace std;

class Time : public Triad
{
	Triad t;
public:
	Triad getTriad() const { return t; }

	void setTriad(Triad tValue) { t = tValue; }

	void Init(Triad t);
	void Display() const;
	void Read();
	const string toString();

	Time(const int first = 0, const int second = 0, const int third = 0);
	Time(const Time& s);

	Time& operator = (const Time& s);

	friend ostream& operator << (ostream& out, const Time& s);
	friend istream& operator >> (istream& in, Time& s);

	operator string () const;

	Time& operator ++ ();
	Time& operator -- ();
	Time operator ++ (int);
	Time operator -- (int);

	~Time(void);

	bool h1(Time d) const;
	bool h2(Time d) const;
	bool m1(Time d) const;
	bool m2(Time d) const;
	bool s1(Time d) const;
	bool s2(Time d) const;
};


