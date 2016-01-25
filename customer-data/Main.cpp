// Adam Allard
// CISS_243_DEB
// Main.cpp

// This program creates two CustomerData objects using two different constructors, then displays the objects' information

#include <iostream>
#include "CustomerData.h"

void displayCustomer(CustomerData c);

int main()
{
	// create an instance of CustomerData with default constuctor then manually set all attributes
	CustomerData one;

	one.setLastName("Smith");
	one.setFirstName("Joan");
	one.setAddress("123 Main Street");
	one.setCity("Smithville");
	one.setState("NC");
	one.setZip("99999");
	one.setPhoneNumber("(333) 333-3333");
	one.setCustomerNumber(12345);
	one.setMailingList(true);


	// create another instance using the 9 arg constructor to set all attributes
	CustomerData two("Jones", "Jenny", "555 East Street", "Jonesville", "VA", "88888", "(555) 555-5555", 77777, false);


	// call display function to output customers' info
	cout << "Customer #1" << endl;
	displayCustomer(one);

	cout << "Customer #2" << endl;
	displayCustomer(two);

	// end of program
	system("pause");
	return 0;
}


// this function displays all the attributes from the CustomerData object passed to it (which includes PersonData attributes)
void displayCustomer(CustomerData c)
{
	// convert boolean answer to Yes or No
	string answer;
	if (c.getMailingList() == 0)
		answer = "No";
	else if (c.getMailingList() == 1)
		answer = "Yes";


	cout << "-----------" << endl;
	cout << "Last Name: " << c.getLastName() << endl;
	cout << "First Name: " << c.getFirstName() << endl;
	cout << "Address: " << c.getAddress() << endl;
	cout << "City: " << c.getCity() << endl;
	cout << "State: " << c.getState() << endl;
	cout << "Zip: " << c.getZip() << endl;
	cout << "Phone Number: " << c.getPhoneNumber() << endl;
	cout << "Customer Number: " << c.getCustomerNumber() << endl;
	cout << "Mailing List? " << answer << endl;

	cout << endl;
}