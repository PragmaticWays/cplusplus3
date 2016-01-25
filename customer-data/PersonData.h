// Adam Allard
// CISS_243_DEB
// PersonData.h

// This PersonData class can hold information about any person. it can hold a persons last name, first
// name, address, city, state, zip, and phone number. the class has methods for setting and returning
// all of the attributes. 

#ifndef PERSONDATA_H
#define PERSONDATA_H

#include <string>
using namespace std;

class PersonData
{
private:
	string lastName,
		   firstName,
		   address,
		   city,
		   state,
		   zip,
		   phoneNumber;
public:
	// constructors
	PersonData();
	PersonData(string, string, string, string, string, string, string);

	// setters
	void setLastName(string);
	void setFirstName(string);
	void setAddress(string);
	void setCity(string);
	void setState(string);
	void setZip(string);
	void setPhoneNumber(string);

	// getters
	string getLastName() const;
	string getFirstName() const;
	string getAddress() const;
	string getCity() const;
	string getState() const;
	string getZip() const;
	string getPhoneNumber() const;
};
#endif