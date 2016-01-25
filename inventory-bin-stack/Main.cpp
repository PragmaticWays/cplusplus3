/*****************************************
Program Inventory Stack

This program keeps a list of objects with serial numbers, 
	manufacturer dates, and lot numbers in a stack by using
	the InventoryBin and Stack classes. 

Author:		Adam Allard
Created:	04/25/15
Revisions:	04/25/15 - Initial
*****************************************/

#include "Stack.h"
#include "InventoryBin.h"

void popItem(Stack<InventoryBin> *stack);
void pushItem(Stack<InventoryBin> *stack);
int menu();

int main()
{
	Stack<InventoryBin> stack;
	Stack<InventoryBin> *stackPtr = nullptr;
	stackPtr = &stack;

	int menuChoice;
	do
	{
		menuChoice = menu();

		switch (menuChoice)
		{
		case 1:
			cout << endl;
			popItem(stackPtr);
			break;
		case 2:
			cout << endl;
			pushItem(stackPtr);
			break;
		case 3:
			cout << endl;
			break;
		}
	} while (menuChoice != 3);


	// prep end program - remove all items in stack
	InventoryBin removing;
	while (stackPtr->pop(removing))
	{
		cout << "Removing: " << endl
			<< removing.getSerialNum() << endl
			<< removing.getManufactDate() << endl
			<< removing.getLotNum() << endl << endl;
	}

	// end
	system("pause");
	return 0;
}


// popItem removes the top item off the stack and 
//    displays the item info just removed
void popItem(Stack<InventoryBin> *stack)
{
	InventoryBin item;

	if (stack->pop(item))
	{
		cout << "Removing: " << endl
			<< item.getSerialNum() << endl
			<< item.getManufactDate() << endl
			<< item.getLotNum() << endl << endl;
	}
	else
		cout << "Stack is empty." << endl << endl;
}


// pushItem prompts user to enter item info, 
//    then pushed filled item onto stack.
void pushItem(Stack<InventoryBin> *stack)
{
	InventoryBin item;
	int num;
	string date;

	cout << "Enter item's serial number: ";
	cin >> num;
	item.setSerialNum(num);

	cout << "Enter item's manufacturer date: ";
	cin >> date;
	item.setManufactDate(date);

	cout << "Enter item's lot number: ";
	cin >> num;
	item.setLotNum(num);

	stack->push(item);

	cout << endl;
}


// menu() returns an int (menuChoice) back to switch loop in main()
int menu()
{
	int choice;

	cout << "Menu" << endl
		 << "1. Pop Item" << endl
		 << "2. Push Item" << endl
		 << "3. Quit" << endl;
	cout << "Enter a number (1-3): ";
	cin >> choice;

	while (choice < 1 || choice > 3)
	{
		cout << "Invalid choice. Reenter (1 - 3): ";
		cin >> choice;
	}

	return choice;
}