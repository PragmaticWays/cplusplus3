// Adam Allard
// CISS_243_DEB_14-54
// NumDays implementation file - has overloaded +, -, prefix ++, postfix ++, prefix --, and postfix -- operators 

#include "NumDays.h"

// ************
// constructors
// ************

// default constructor
NumDays::NumDays()
{
	hours = 0;
	days = 0;
}

// most common used constructor. accepts the hours worked as an argument 
NumDays::NumDays(double h)
{
	hours = h;
	convert();
}

// **************
// setter methods 
// **************

void NumDays::setHours(double h)
{
	hours = h;
	convert();
}

void NumDays::setDays(double d)
{
	days = d;
	convert();
}

// converts the hours and days using an 8 hour work day basis 
void NumDays::convert()
{
	days = hours / 8.0;
	hours = days * 8.0;
}

// **************
// getter methods
// **************

double NumDays::getHours() const
{
	return hours;
}
double NumDays::getDays() const
{
	return days;
}

// ********************
// overloaded operators
// ********************

// overload addition operator
NumDays NumDays::operator+(const NumDays &right)
{
	NumDays temp;

	temp.hours = hours + right.hours;
	temp.convert();

	return temp;
}

// overload subtraction operator 
NumDays NumDays::operator-(const NumDays &right)
{
	NumDays temp;

	temp.hours = hours - right.hours;
	temp.convert();

	return temp;
}

// overload prefix increment operator 
NumDays NumDays::operator++()
{
	++hours;
	convert();

	return *this;
}

// overload postfix increment operator 
NumDays NumDays::operator++(int)
{
	NumDays temp(hours);

	hours++;
	convert();

	return temp;
}

// overload prefix decrement operator 
NumDays NumDays::operator--()
{
	--hours;
	convert();

	return *this;
}

// overload postfix decrement operator
NumDays NumDays::operator--(int)
{
	NumDays temp(hours);

	hours--;
	convert();

	return temp;
}