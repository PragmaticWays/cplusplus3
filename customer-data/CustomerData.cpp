// Adam Allard
// CISS_243_DEB
// CustomerData.cpp

// This CustomerData class is derived from the PersonData class. It has all the attributes 
// from the PersonData class (last name, first name, address, city, state, zip, and phone number)
// as well as adds its own attributes (customer number and mailing list entry)the class has 
// methods for setting and returning all the attributes 

#include "CustomerData.h"

// ******************************************
// Constructors
// ******************************************

// default constructor - sets attributes to zero and false
CustomerData::CustomerData()
{
	customerNumber = 0;
	mailingList = false;
}

// 9 arg constructor - set all PersonData attributes and CustomerData attributes
CustomerData::CustomerData(string l, string f, string a, string c, string s, string z, string p, int n, bool m)
{
	// set attributes derived from PersonData
	setLastName(l);
	setFirstName(f);
	setAddress(a);
	setCity(c);
	setState(s);
	setZip(z);
	setPhoneNumber(p);

	// set CustomerData attributes
	customerNumber = n;
	mailingList = m;
}

// ******************************************
// Setters
// ******************************************

void CustomerData::setCustomerNumber(int n)
{
	customerNumber = n;
}

void CustomerData::setMailingList(bool m)
{
	mailingList = m;
}

// ******************************************
// Getters
// ******************************************

int CustomerData::getCustomerNumber() const
{
	return customerNumber;
}

bool CustomerData::getMailingList() const
{
	return mailingList;
}