/***************************************************
Class TestScores

This class is used to accept an integer array of scores. It has a member function to get the average of
the test scores - this function will also range check each element in the array to be between 0 and 100.
If an element is out of range, a NegativeScore or TooLargeScore exception will be thrown

Author: Adam Allard
Created: 04/10/15
Revisions: 04/10/15 - Initial
***************************************************/


#include "TestScores.h"



/***********************************
			constructors
************************************/


// default constructor
TestScores::TestScores()
{

}


// constructor to accept an array of test scores
TestScores::TestScores(int s[])
{
	// set array size to 3 and average to zero
	arraySize = 3;
	average = 0;

	// make array for scores using the pointer
	scoresPtr = new int[arraySize];

	// fill new array with contents of the arguement array
	for (int i = 0; i < arraySize; i++)
	{
		scoresPtr[i] = s[i];
	}
}



/***********************************
           getters
************************************/


// get the average off the test scores 
double TestScores::getAverage()
{
	// iterate through array
	for (int i = 0; i < arraySize; i++)
	{
		// get current element
		num = scoresPtr[i];

		// if less than zero; throw exception declared in TestScores.h
		if (num < 0)
		{
			throw NegativeScore(num);
		}

		// if greater than 100, throw exception declared in TestScores.h
		else if (num > 100)
		{
			throw TooLargeScore(num);
		}

		// add current element to average
		average += num;
	}

	// get average by dividing total from the number of elements
	average /= arraySize;

	

	return average;
}


/***********************************************
in your opinion, how much comments are too much?
did I over do it in this assignment where it gets
too crowded and redundant?
************************************************/

