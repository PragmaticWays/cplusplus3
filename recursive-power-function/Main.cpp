/********************************
Program Exponent Function - This program demonstrates recursion by creating a
	function that accepts any type of number and an int, and raises the first number by an exponent of the 
	second number. It then utilizes the function several times in main() to demonstrate it works properly
	
Author:		Adam Allard
Created:	04/29/15
Revisions:	04/29/15 - Initial
			04/29/15 - Converted raiseTo function to a template function to
						accept different data types. Exponent is still assumed
						as a positive integer
*********************************/

#include <iostream>
#include <iomanip>
using namespace std;

template <class F>
F raiseTo(F, int);

int main()
{
	int iProd;

	iProd = raiseTo(6, 2);
	cout << endl << " 6 ^ 2 =  " << iProd << endl;

	iProd = raiseTo(7, 3);
	cout << endl << " 7 ^ 3 =  " << iProd << endl;

	iProd = raiseTo(8, 4);
	cout << endl << " 8 ^ 4 =  " << iProd << endl;

	iProd = raiseTo(9, 5);
	cout << endl << " 9 ^ 5 =  " << iProd << endl;

	double dProd;
	cout << setprecision(20);

	dProd = raiseTo(4.4, 3);
	cout << endl << " 4.4 ^ 3 =  " << dProd << endl;

	dProd = raiseTo(8.3, 4);
	cout << endl << " 8.3 ^ 4 =  " << dProd << endl;

	dProd = raiseTo(2.2, 2);
	cout << endl << " 2.2 ^ 2 =  " << dProd << endl;

	dProd = raiseTo(4.567, 7);
	cout << endl << " 4.567 ^ 7 =  " << dProd << endl;

	cout << endl;
	system("pause");
	return 0;
}

// this function accepts two numbers and returns the product of the 
//		first number raised to the power of the second number.
//		(this function assumes that the exp is positive)
template <class F>
F raiseTo(F num, int exp)
{
	if (exp == 1)
		return num;
	else
		return num * raiseTo(num, exp - 1);
}