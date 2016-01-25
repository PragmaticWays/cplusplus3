#ifndef EMPLOYEEINFO_H
#define EMPLOYEEINFO_H
#include <string>
#include "BinaryTree.h"
using namespace std;

/*****************************
Class EmployeeInfo.h - This class creates an EmployeeInfo object which stores
	an employee's ID number and name. This class overrides the ==, <, >, and << 
	operators to effectively work with the BinaryTree class to store EmployeeInfo objects
	in a binary tree. The binary tree will be sorted using the employees' ID number

Author:		Adam Allard
Created:	05/07/15
Revisions:	05/08/15 - Added the overloaded operator methods

********************************/

class EmployeeInfo
{
private:
	int empID;
	string empName;
public:
	EmployeeInfo();
	EmployeeInfo(int, string);

	void setEmpID(int);
	void setEmpName(string);

	int getEmpID() const;
	string getEmpName() const;


	bool operator==(int value)
	{
		return this->getEmpID() == value;
	}

	bool operator==(const EmployeeInfo &emp)
	{
		return this->empID == emp.empID;
	}

	bool operator< (const EmployeeInfo &emp)
	{
		return this->empID == emp.empID;
	}

	bool operator> (const EmployeeInfo &emp)
	{
		return this->empID == emp.empID;
	}

	friend ostream &operator<<(ostream &strm, EmployeeInfo &obj)
	{
		strm << obj.empName << " - " << obj.empID << endl;
		return strm;
	}

};
#endif