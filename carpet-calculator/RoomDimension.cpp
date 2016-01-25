// Adam Allard
// CISS_243_DEB_14-54
// RoomDimension used to set a room's dimensions with FeetInches objects and calculate the area 

#include "RoomDimension.h"

RoomDimension::RoomDimension()
{

}

RoomDimension::RoomDimension(FeetInches l, FeetInches w)
{
	length = l;
	width = w;
}

void RoomDimension::setLength(FeetInches l)
{
	length = l;
}

void RoomDimension::setWidth(FeetInches w)
{
	width = w;
}

FeetInches RoomDimension::getArea() 
{
	FeetInches area = width.multiply(length);
	return area;
}
