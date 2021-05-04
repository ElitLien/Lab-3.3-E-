/////////////
// Triad.cpp
/////////////

#include "Triad.h"
#include <iostream>
#include <sstream>

using namespace std;

bool Triad::setFirst(int value)
{
    if (value > -1 && value < 24)
    {
        first = value;
        return true;
    }
    else
    {
        return false;
    }
}

bool Triad::setSecond(int value)
{
    if (value > -1 && value < 60)
    {
        second = value;
        return true;
    }
    else
    {
        return false;
    }
}

bool Triad::setThird(int value)
{
    if (value > -1 && value < 60)
    {
        third = value;
        return true;
    }
    else
    {
        return false;
    }
}

void Triad::Init(int firstValue, int secondValue, int thirdValue)
{
    setFirst(firstValue);
    setSecond(secondValue);
    setThird(thirdValue);
}

void Triad::Display() const
{
    cout << first << "." << second << "." << third << endl;
}

void Triad::Read()
{
    int firstValue;
    int secondValue;
    int thirdValue;

    cout << "Enter triad " << endl << endl;
    cout << "first =  "; cin >> firstValue;
    cout << "second =  "; cin >> secondValue;
    cout << "third =  "; cin >> thirdValue;

    Init(firstValue, secondValue, thirdValue);
}

const string Triad::toString()
{
    stringstream sout;

    sout << first << "." << second << "." << third;

    return sout.str();
}

Triad::Triad()
    : first(0), second(0), third(0)
{}

Triad::Triad(const int first, const int second, const int third)
    : first(first), second(second), third(third)
{}

Triad::Triad(const Triad& m)
    : first(m.first), second(m.second), third(m.third)
{}

Triad& Triad::operator =(const Triad& m)
{
    this->first = m.first;
    this->second = m.second;
    this->third = m.third;

    return *this;
}

ostream& operator << (ostream& out, const Triad& m)
{
    out << string(m);
    return out;
}

istream& operator >> (istream& in, Triad& m)
{
    int first;
    int second;
    int third;

    cout << endl;
    cout << "first = ? "; in >> first;
    cout << "second = ? "; in >> second;
    cout << "third = ? "; in >> third;

    m.setFirst(first);
    m.setSecond(second);
    m.setThird(third);

    return in;
}

Triad::operator string () const
{
    stringstream ss;
    ss << endl;
    ss << "first = " << first << endl;
    ss << "second = " << second << endl;
    ss << "third = " << third << endl;

    return ss.str();
}

Triad& Triad::operator ++ ()
{
    ++first;
    ++second;
    ++third;
    return *this;
}

Triad& Triad::operator -- ()
{
    --first;
    --second;
    --third;
    return *this;
}

Triad Triad::operator ++ (int)
{
    Triad t(*this);
    first++;
    second++;
    third++;
    return t;
}

Triad Triad::operator -- (int)
{
    Triad t(*this);
    first--;
    second--;
    third--;
    return t;
}

Triad::~Triad(void)
{}

bool Triad::h1(Triad t) const
{
    if (first < t.first)
    {
        return true;
    }
    if (first > t.first)
    {
        return false;
    }

    if (second < t.second)
    {
        return true;
    }
    if (second > t.second)
    {
        return false;
    }

    if (third < t.third)
    {
        return true;
    }
    if (third > t.third)
    {
        return false;
    }

    return false;
}
bool Triad::h2(Triad t) const
{
    if (first < t.first)
    {
        return true;
    }
    if (first > t.first)
    {
        return false;
    }

    if (second < t.second)
    {
        return true;
    }
    if (second > t.second)
    {
        return false;
    }

    if (third < t.third)
    {
        return true;
    }
    if (third > t.third)
    {
        return false;
    }

    return true;
}
bool Triad::m1(Triad t) const
{
    if ((first == t.first) && (second == t.second) && (third == t.third))
    {
        return true;
    }

    return false;
}
bool Triad::m2(Triad t) const
{
    if ((first == t.first) && (second == t.second) && (third == t.third))
    {
        return false;
    }

    return true;
}
bool Triad::s1(Triad t) const
{
    if (first < t.first)
    {
        return false;
    }
    if (first > t.first)
    {
        return true;
    }

    if (second < t.second)
    {
        return false;
    }
    if (second > t.second)
    {
        return true;
    }

    if (third < t.third)
    {
        return false;
    }
    if (third > t.third)
    {
        return true;
    }

    return false;
}
bool Triad::s2(Triad t) const
{
    if (first < t.first)
    {
        return false;
    }
    if (first > t.first)
    {
        return true;
    }

    if (second < t.second)
    {
        return false;
    }
    if (second > t.second)
    {
        return true;
    }

    if (third < t.third)
    {
        return false;
    }
    if (third > t.third)
    {
        return true;
    }

    return true;
}

double Triad::check()
{
    return first > second;
}

