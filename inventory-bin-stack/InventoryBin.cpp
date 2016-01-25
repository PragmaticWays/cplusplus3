/*****************************************
Class InventoryBin.cpp

This class creates an object with a serial number, manufacturer date, and lot number
with functions to set and get the attributes.

Author:		Adam Allard
Created:	04/25/15
Revisions:	04/25/15 - Initial
*****************************************/

#include "InventoryBin.h"

// constructor
InventoryBin::InventoryBin()
{
	serialNum = 0;
	manufactDate = "";
	lotNum = 0;
}


// setters
void InventoryBin::setSerialNum(int num)
	{ serialNum = num; }

void InventoryBin::setManufactDate(string date)
	{ manufactDate = date; }

void InventoryBin::setLotNum(int num)
	{ lotNum = num; }


// getters
int InventoryBin::getSerialNum() const
	{ return serialNum; }

string InventoryBin::getManufactDate() const
	{ return manufactDate; }

int InventoryBin::getLotNum() const
	{ return lotNum; }