#include "BinaryTree.h"
#include "EmployeeInfo.h"

/******************************
Program Employee Info Driver - This program creates EmployeeInfo objects and stores
	them in a Binary Tree. It then allows a user to search the tree for an employee
	using their ID number.

Author:		Adam Allard
Created:	05/07/15
Revisions:	05/08/15 - Updated to accomodate new search features to Employee.h and BinaryTree.h

*******************************/

int main()
{
	BinaryTree<EmployeeInfo> avionicsTechs;
	EmployeeInfo emp;

	emp.setEmpID(1021);
	emp.setEmpName("John Williams");
	avionicsTechs.insertNode(emp);

	emp.setEmpID(1057);
	emp.setEmpName("Bill Witherspoon");
	avionicsTechs.insertNode(emp);

	emp.setEmpID(2487);
	emp.setEmpName("Jennifer Twain");
	avionicsTechs.insertNode(emp);

	emp.setEmpID(3769);
	emp.setEmpName("Sophia Lancaster");
	avionicsTechs.insertNode(emp);

	emp.setEmpID(1017);
	emp.setEmpName("Debbie Reece");
	avionicsTechs.insertNode(emp);

	emp.setEmpID(1275);
	emp.setEmpName("George McMullen");
	avionicsTechs.insertNode(emp);

	emp.setEmpID(1899);
	emp.setEmpName("Ashley Smith");
	avionicsTechs.insertNode(emp);

	emp.setEmpID(4218);
	emp.setEmpName("Josh Plemmons");
	avionicsTechs.insertNode(emp);


	EmployeeInfo checkEmp;
	char again = 'y';
	int idNum;
	
	while (toupper(again) == 'Y')
	{
		cout << "Search for employee by entering in the employee ID number: ";
		cin >> idNum;

		checkEmp.setEmpID(idNum);
		cout << endl;

		// if checkEmp is not found in avionicsTechs
		if (!avionicsTechs.searchNode(checkEmp))
		{
			cout << "\tEmployee ID not found." << endl << endl;
		}
		// else if avionicsTechs.searchNode(check) == true, employee info will 
		//		be displayed via the BinaryTree class in searchNode method


		cout << "\tWould you like to search again? (Y/N): ";
		cin >> again;
		cout << endl;
	}

	system("pause");
	return 0;
}