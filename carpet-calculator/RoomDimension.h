// Adam Allard
// CISS_243_DEB_14-54
// RoomDimension used to set a room's dimensions with FeetInches objects and calculate the area 

#ifndef ROOMDIMENSION_H
#define ROOMDIMENSION_H

#include "FeetInches.h"

class RoomDimension
{
private:
	FeetInches length;
	FeetInches width;
public:
	RoomDimension();
	RoomDimension(FeetInches, FeetInches);
	void setLength(FeetInches);
	void setWidth(FeetInches);
	FeetInches getArea();
};
#endif 
