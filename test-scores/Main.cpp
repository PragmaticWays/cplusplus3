/***************************************************
Program: Test Scores

This program creates 4 arrays of test scores for a really small class of only 3 people. 
	It will then pass the array to a function testingScores(int[]) where it will create a TestScores object,
	get the average of the test scores, and catch the exceptions (if any) which are declared
	in TestScores.h

Author: Adam Allard
Created: 04/10/15
Revisions: 04/10/15 - Initial
***************************************************/

#include <iostream>
#include "TestScores.h"
using namespace std;

void testingScores(int[]);

int main()
{
	// 4 arrays of test scores, based on a class size of 3. if the class size changes, make sure
	// to change constructor in TestScores.cpp (arraySize = 3) as well
	int week1[] = { 99,  98, 96  };
	int week2[] = { 100, 45, 176 };
	int week3[] = { 0,  -45, 79  };
	int week4[] = { 0,   51, 79  };



	// display averages passing each week's array to testingScores(int[]) function
	cout << "Week 1: ";
	testingScores(week1);

	cout << "Week 2: ";
	testingScores(week2);

	cout << "Week 3: ";
	testingScores(week3);

	cout << "Week 4: ";
	testingScores(week4);

	// end of program
	cout << endl;
	system("pause");
	return 0;
}



// this function creates a TestScores object based on the scores array passed. 
// it then gets the average score of the array and checks if the range of the elements
// is between 0 and 100, if not it will throw the appropriate exception
void testingScores(int s[])
{
	try
	{
		// try to create a TestScores object with passed array and get average
		TestScores scores(s);
		cout << scores.getAverage() << endl;
	}

	// if an element in the passed array is below 0
	catch (TestScores::NegativeScore e)
	{
		cout << "ERROR: " << e.getScore() << " is below 0." << endl;
	}

	// if an element in the passed array is above 100
	catch (TestScores::TooLargeScore e)
	{
		cout << "ERROR: " << e.getScore() << " is above 100." << endl;
	}
}