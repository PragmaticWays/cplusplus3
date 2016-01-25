// Adam Allard
// CISS_243_DEB
// BasicShape.h

// This BasicShape class is a generic shape with an area, a function to return the area, and a virtual function 
// to be overridden by derived classes to calculate the area

#ifndef BASICSHAPE_H
#define BASICSHAPE_H

class BasicShape
{
protected:
	double area;
public:
	// getter
	double getArea() const;

	// virtual function to be overriden by derived classes
	virtual double calcArea() = 0;
};
#endif