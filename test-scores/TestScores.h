/***************************************************
Class TestScores

This class is used to accept an integer array of scores. It has a member function to get the average of 
	the test scores - this function will also range check each element in the array to be between 0 and 100.
	If an element is out of range, a NegativeScore or TooLargeScore exception will be thrown

Author: Adam Allard
Created: 04/10/15
Revisions: 04/10/15 - Initial
***************************************************/

#ifndef TESTSCORES_H
#define TESTSCORES_H

class TestScores
{
private:
	int *scoresPtr;   // a pointer to the scores array
	int arraySize;    // array size declared in TestScores.cpp
	int num;		  // used as current element for iterating through array
	double average;   // used for the average of the scores

public:

	// constructors
	TestScores();
	TestScores(int[]);

	// getters
	double getAverage();


	/************* exception classes *********/

	class NegativeScore
	{
	private:
		int score;
	public:
		// constructor - record what score threw exception
		NegativeScore(int s)
		{
			score = s;
		}

		// getter - pass score back to exception handler
		int getScore() const
		{
			return score;
		}
	}; // end of NegativeScore exception class



	class TooLargeScore
	{
	private:
		int score;
	public:
		// constructor - record what score threw exception
		TooLargeScore(int s)
		{
			score = s;
		}

		// getter - pass score back to exception handler
		int getScore() const
		{
			return score;
		}
	}; // end of TooLargeScore exception class

}; // end of TestScores.h
#endif 