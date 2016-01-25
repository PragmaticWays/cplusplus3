// Adam Allard
// CISS_243_DEB
// Rectangle.cpp

// This Rectangle class is derived from the BasicShape class. it has a width and lengh attribute
// used to calculate the area (a virtual function overridden from the BasicShape class) 

#include "Rectangle.h"

// constructor
Rectangle::Rectangle(long w, long l)
{
	width = w;
	length = l;
	calcArea();
}

// getters
long Rectangle::getWidth() const
{
	return width;
}

long Rectangle::getLength() const
{
	return length;
}

// overriden virtual function from the BasicShape class
double Rectangle::calcArea()
{
	area = width * length;
	return area;
}