// Adam Allard
// CISS_243_DEB
// Rectangle.h

// This Rectangle class is derived from the BasicShape class. it has a width and lengh attribute
// used to calculate the area (a virtual function overridden from the BasicShape class)

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "BasicShape.h"

class Rectangle : public BasicShape
{
private:
	long width;
	long length;
public:
	// constructor
	Rectangle(long, long);

	// getters
	long getWidth() const;
	long getLength() const;

	// overriden function from BasicShape class
	virtual double calcArea();
};
#endif