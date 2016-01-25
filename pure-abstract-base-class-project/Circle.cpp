// Adam Allard
// CISS_243_DEB
// Circle.cpp

// This Circle class is derived from the BasicShape class. it has a centerX and CenterY coordinates, as well
// as a radius attributes used to calculate the area (a virtual function overridden from the BasicShape class)

#include "Circle.h"

// constructor
Circle::Circle(long x, long y, double r)
{
	centerX = x;
	centerY = y;
	radius = r;

	calcArea();
}

// getters
long Circle::getCenterX() const
{
	return centerX;
}

long Circle::getCenterY() const
{
	return centerY;
}

// overriden virtual function from the BasicShape class
double Circle::calcArea()
{
	area = 3.14159 * radius * radius;
	return area;
}