// Adam Allard
// CISS_243_DEB
// PersonData.cpp

// This PersonData class can hold information about any person. it can hold a persons last name, first
// name, address, city, state, zip, and phone number. the class has methods for setting and returning
// all of the attributes. 

#include "PersonData.h"

// *******************************************************************
// Constructors
// *******************************************************************

// default constructor - set all attributes to empty strings
PersonData::PersonData()
{
	lastName = "";
	firstName = "";
	address = "";
	city = "";
	state = "";
	zip = "";
	phoneNumber = "";
}

// 7 arg constructor - has 7 parameters to set all 7 attributes
PersonData::PersonData(string l, string f, string a, string c, string s, string z, string p)
{
	lastName = l;
	firstName = f;
	address = a;
	city = c;
	state = s;
	zip = z;
	phoneNumber = p;
}

// *******************************************************************
// Setters
// *******************************************************************

void PersonData::setLastName(string l)
	{ lastName = l; }

void PersonData::setFirstName(string f)
	{ firstName = f; }

void PersonData::setAddress(string a)
	{ address = a; }

void PersonData::setCity(string c)
	{ city = c; }

void PersonData::setState(string s)
	{ state = s; }

void PersonData::setZip(string z)
	{ zip = z; }

void PersonData::setPhoneNumber(string p)
	{ phoneNumber = p; }


// *******************************************************************
// Getters
// *******************************************************************

string PersonData::getLastName() const
	{ return lastName; }

string PersonData::getFirstName() const
	{ return firstName; }

string PersonData::getAddress() const
	{ return address; }

string PersonData::getCity() const
	{ return city; }

string PersonData::getState() const
	{ return state; } 

string PersonData::getZip() const
	{ return zip; }

string PersonData::getPhoneNumber() const
	{ return phoneNumber; }