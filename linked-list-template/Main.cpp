/*****************************************
Program Linked_List

This program creates two instances from the Linked_List.h class
	and utilizes all its member functions to demonstrate the class
	works correctly. 

Author: Adam Allard
Created: 04/15/15
Revisions: 04/15/15 - Initial
		   04/16/15 - Added search features

******************************************/

#include "Linked_List.h"

int main()
{
	// make and fill an instance of Linked_List of <int>

	Linked_List<int> iList;
	iList.displayList();

	iList.appendNode(3);
	iList.appendNode(5);
	iList.appendNode(7);
	iList.displayList();

	iList.insertNode(6);
	iList.displayList();

	iList.deleteNode(3);
	iList.displayList();

	// search for int in list
	cout << "Enter an integer to search: ";
	int iFind;
	cin >> iFind;
	int iIndex = iList.searchList(iFind);

	if (iIndex == -1)
		cout << iFind << " is not in the list." << endl;
	else
		cout << iFind << " is at index " << iIndex << endl;


	// make and fill an instance of Linked_List of <double>

	Linked_List<double> dList;
	dList.displayList();

	dList.appendNode(3.3);
	dList.appendNode(5.5);
	dList.appendNode(7.7);
	dList.displayList();

	dList.insertNode(4.4);
	dList.displayList();

	dList.deleteNode(3.3);
	dList.displayList();

	// search for double in list
	cout << "Enter a double to search: ";
	double dFind;
	cin >> dFind;
	double dIndex = dList.searchList(dFind);

	if (dIndex == -1)
		cout << dFind << " is not in the list." << endl;
	else
		cout << dFind << " is at index " << dIndex << endl;



	cout << endl << "End of program." << endl;
	system("pause");
	return 0;
}


