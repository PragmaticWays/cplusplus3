/***************************************************
Program MinMax

This program creates 3 MinMax objects using an int, double, and char data types. 
	It then uses the MinMax functions minimum() and maximum() to display the 
	smaller and larger of the two data types 

Author: Adam Allard
Created: 04/10/15
Revisions: 04/10/15 - Initial
***************************************************/

#include <iostream>
#include "MinMax.h"
using namespace std;

int main()
{
	// create 3 instances of MinMax using ints, doubles, then chars
	MinMax<int> i(5, 6);
	MinMax<double> d(10.1, 3.3);
	MinMax<char> c('c', 'b');

	// display the smaller then larger of the i object
	cout << i.minimum() << endl;
	cout << i.maximum() << endl << endl;

	// display the smaller then larger of the d object
	cout << d.minimum() << endl;
	cout << d.maximum() << endl << endl;

	// display the smaller then larger of the c object 
	cout << c.minimum() << endl;
	cout << c.maximum() << endl << endl;


	// end of program
	system("pause");
	return 0;
}