/************************************
Class InventoryBin.h

This class creates an object with a serial number, manufacturer date, and lot number
	with functions to set and get the attributes.

Author:		Adam Allard
Created:	04/25/15
Revisions:	04/25/15 - Initial
************************************/

#ifndef	INVENTORYBIN_H
#define INVENTORYBIN_H
#include <string>
using namespace std;

class InventoryBin
{
private:
	int serialNum;
	string manufactDate;
	int lotNum;
public:
	InventoryBin();

	void setSerialNum(int);
	void setManufactDate(string);
	void setLotNum(int);

	int getSerialNum() const;
	string getManufactDate() const;
	int getLotNum() const;
};

#endif