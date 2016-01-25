/*******************************************
Program Stack Driver

This program demonstrates how the template dynamic stack class (Stack.h) 
	works. It creates two Stack objects, pushes some items on them, then
	pops them off. 

Author:		Adam Allard
Created:	04/25/15
Revisions:	04/25/15 - Initial
********************************************/

#include "Stack.h"

void pop(Stack<int>&);
void pop(Stack<double>&);

int main()
{
	Stack<int> iNums;
	int iNum;

	iNums.push(3);
	iNums.push(2);
	iNums.push(1);

	pop(iNums);
	pop(iNums);
	pop(iNums);
	pop(iNums);

	cout << endl;

	Stack<double> dNums;
	double dNum;

	dNums.push(1.1);
	dNums.push(2.2);
	dNums.push(3.3);

	pop(dNums);
	pop(dNums);
	pop(dNums);
	pop(dNums);

	cout << endl;

	system("pause");
	return 0;
}

void pop(Stack<int> &num)
{
	int n;
	if (num.pop(n))
		cout << n << " is gone" << endl;
	else
		cout << "Stack is empty" << endl;
}

void pop(Stack<double> &num)
{
	double n;
	if (num.pop(n))
		cout << n << " is gone" << endl;
	else
		cout << "Stack is empty" << endl;
}