///////////
// Triad.h
///////////

#pragma once
#include <string>
#include <iostream>
#include "Object.h"

using namespace std;

class Triad :public Object
{
	int first;
	int second;
	int third;
	static int counter;
public:
	int getFirst() const { return first; }
	int getSecond() const { return second; }
	int getThird() const { return third; }

	bool setFirst(int);
	bool setSecond(int);
	bool setThird(int);

	void Init(int firstValue, int secondValue, int thirdValue);
	void Display() const;
	void Read();
	const string toString();

	Triad();
	Triad(const int first, const int second, const int third);
	Triad(const Triad& m);
	~Triad(void);

	Triad& operator = (const Triad& m);

	friend ostream& operator << (ostream& out, const Triad& m);
	friend istream& operator >> (istream& in, Triad& m);

	operator string () const;

	Triad& operator ++ ();
	Triad& operator -- ();
	Triad operator ++ (int);
	Triad operator -- (int);

	bool h1(Triad t) const;
	bool h2(Triad t) const;
	bool m1(Triad t) const;
	bool m2(Triad t) const;
	bool s1(Triad t) const;
	bool s2(Triad t) const;

	double check();
};

