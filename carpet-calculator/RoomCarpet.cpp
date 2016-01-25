// Adam Allard
// CISS_243_DEB_14-54

#include "RoomCarpet.h"

RoomCarpet::RoomCarpet()
{

}

RoomCarpet::RoomCarpet(RoomDimension r, double c)
{
	room = r;
	cost = c;
}

void RoomCarpet::setRoom(RoomDimension r)
{
	room = r;
}

void RoomCarpet::setCost(double c)
{
	cost = c;
}

double RoomCarpet::getTotalCost() const
{
	double totalCost, area;
	RoomDimension temp;
	temp = room;
	area = temp.getArea();
	totalCost = area * cost;
	return totalCost;
}