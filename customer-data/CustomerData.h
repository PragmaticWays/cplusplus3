// Adam Allard
// CISS_243_DEB
// CustomerData.h

// This CustomerData class is derived from the PersonData class. It has all the attributes 
// from the PersonData class (last name, first name, address, city, state, zip, and phone number)
// as well as adds its own attributes (customer number and mailing list entry). the class has 
// methods for setting and returning all the attributes 

#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H

#include "PersonData.h"

class CustomerData : public PersonData
{
private:
	int customerNumber;
	bool mailingList;
public:
	// constructors
	CustomerData();
	CustomerData(string, string, string, string, string, string, string, int, bool);

	// setters
	void setCustomerNumber(int);
	void setMailingList(bool);

	// getters
	int getCustomerNumber() const;
	bool getMailingList() const;
};
#endif