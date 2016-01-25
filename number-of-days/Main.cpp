// Adam Allard
// CISS_243_DEB_14-54
// This program demonstrates the use of the operator overloadig methods in the NumDays class.

#include <iostream>
#include "NumDays.h"
using namespace std;

void display(NumDays, NumDays, NumDays);

int main()
{
	// create instances of NumDays
	NumDays first(18);
	NumDays second(12);
	NumDays third;

	display(first, second, third);

	// prefix increment
	cout << "Prefix increment - adding one to first while setting it to second" << endl;
	second = ++first;
	display(first, second, third);

	// postfix increment
	cout << "Postfix increment - setting third to equal second, then add one to second" << endl;
	third = second++;
	display(first, second, third);

	// prefix decrement
	cout << "prefix decrement - taking one off third while setting it to first" << endl;
	first = --third;
	display(first, second, third);

	// postfix decrement
	cout << "postfix decrement - setting second to equal third, then take one off third" << endl;
	second = third--;
	display(first, second, third);

	// addition
	cout << "addition - third equals first plus second" << endl;
	third = first + second;
	display(first, second, third);

	// subtraction
	cout << "subtraction - third equals first minus second" << endl;
	third = first - second;
	display(first, second, third);

	cout << endl;
	system("pause");
	return 0;
}

void display(NumDays f, NumDays s, NumDays t)
{
	cout << "   First object" << endl;
	cout << "      " << f.getHours() << " hours" << endl;
	cout << "      " << f.getDays() << " days" << endl;

	cout << "   Second object" << endl;
	cout << "      " << s.getHours() << " hours" << endl;
	cout << "      " << s.getDays() << " days" << endl;

	cout << "   Third object" << endl;
	cout << "      " << t.getHours() << " hours" << endl;
	cout << "      " << t.getDays() << " days" << endl << endl;
}