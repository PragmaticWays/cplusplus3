// Adam Allard
// CISS_243_DEB_14-54
// RoomCarpet used to calculate the cost to carpet a room using a RoomDimension object and the cost of carpet/sqft

#ifndef ROOMCARPET_H
#define ROOMCARPET_H

#include "RoomDimension.h"

class RoomCarpet
{
private:
	RoomDimension room;
	double cost;
public:
	RoomCarpet();
	RoomCarpet(RoomDimension, double);
	void setRoom(RoomDimension);
	void setCost(double);
	double getTotalCost() const;
};
#endif