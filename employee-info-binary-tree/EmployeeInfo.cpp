#include "EmployeeInfo.h"

/*****************************
Class EmployeeInfo.c - This class creates an EmployeeInfo object which stores
an employee's ID number and name. This class overrides the ==, <, >, and <<
operators to effectively work with the BinaryTree class to store EmployeeInfo objects
in a binary tree. The binary tree will be sorted using the employees' ID number

Author:		Adam Allard
Created:	05/07/15
Revisions:	(none)

********************************/

EmployeeInfo::EmployeeInfo()
{
	empID = 0;
	empName = "";
}

EmployeeInfo::EmployeeInfo(int i, string n)
{
	empID = i;
	empName = n;
}

void EmployeeInfo::setEmpID(int i)
	{ empID = i; }

void EmployeeInfo::setEmpName(string n)
	{ empName = n; }

int EmployeeInfo::getEmpID() const
	{ return empID; }

string EmployeeInfo::getEmpName() const
	{ return empName; }
