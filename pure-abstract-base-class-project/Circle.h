// Adam Allard
// CISS_243_DEB
// Circle.h

// This Circle class is derived from the BasicShape class. it has a centerX and CenterY coordinates, as well
// as a radius attributes used to calculate the area (a virtual function overridden from the BasicShape class)

#ifndef CIRCLE_H
#define CIRCLE_H

#include "BasicShape.h"

class Circle : public BasicShape
{
private:
	long centerX;
	long centerY;
	double radius;
public:
	// constructor
	Circle(long, long, double);

	// getters
	long getCenterX() const;
	long getCenterY() const;

	// overriden function from BasicShape class
	virtual double calcArea();
};
#endif