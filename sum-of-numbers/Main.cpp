/****************************
Program Sum It All Up - This program uses a recursive function which accepts
	an int and adds up all the integers under it from 1and returns it.
	
Author:		Adam Allard
Created:	04/29/15
Revisions:	04/29/15 - Initial
****************************/

#include <iostream>
#include <string>
using namespace std;

int sum(int);
string displayAddingNums(int);

int main()
{
	for (int i = 1; i < 11; i++)
	{
		cout << endl << displayAddingNums(i) << " = " << sum(i) << endl;
	}

	cout << endl;
	system("pause");
	return 0;
}

int sum(int num)
{
	if (num == 1)
		return 1;
	else
		return num + sum(num - 1);
}

string displayAddingNums(int num)
{
	if (num == 1)
		return to_string(1);
	else
		return to_string(num) + " + " + displayAddingNums(num - 1);
}