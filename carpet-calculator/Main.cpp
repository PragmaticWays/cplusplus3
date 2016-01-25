// Adam Allard
// CISS_243_DEB_14-54
// This program calculates the cost to carpet a room making use of a RoomCarpet class, RoomDimension class, and FeetInches class

#include <iomanip>
#include "RoomCarpet.h"

int main()
{
	RoomCarpet room;
	RoomDimension size;
	FeetInches length;
	FeetInches width;
	double feet, inches, cost;
	char choice;

	do
	{
		// prompt user for room length dimensions
		cout << "Enter the room's length in feet and inches: ";
		cin >> feet >> inches;
		length.setFeet(feet);
		length.setInches(inches);

		// prompt user for room width dimensions
		cout << "Enter the room's width in feet and inches: ";
		cin >> feet >> inches;
		width.setFeet(feet);
		width.setInches(inches);

		// set the rooms size dimensions with user entry
		size.setLength(length);
		size.setWidth(width);
		room.setRoom(size);

		// prompt user for cost of carpet
		cout << "Enter the cost per square foot of carpet: ";
		cin >> cost;
		room.setCost(cost);

		// display cost
		cout << setprecision(2) << fixed << showpoint;
		cout << "\nTotal Cost: $" << room.getTotalCost();

		// prompt user to calc another room
		cout << "\nWould you like to calculate another room? ";
		cin >> choice;
		cout << endl;
	} while (choice == 'y' || choice == 'Y');

	cout << endl;
	system("pause");
	return 0;
}