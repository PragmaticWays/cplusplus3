// Adam Allard
// CISS_243_DEB
// BasicShape.cpp

// This BasicShape class is a generic shape with an area, a function to return the area, and a virtual function 
// to be overridden by derived classes to calculate the area

#include "BasicShape.h"

// getter
double BasicShape::getArea() const
{
	return area;
}