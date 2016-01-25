/***************************************************
Class MinMax

This class is a template class used to compare two data types to return
	which one is smaller and which one is larger. 

Author: Adam Allard
Created: 04/10/15
Revisions: 04/10/15 - Initial
***************************************************/

#ifndef MINMAX_H
#define MINMAX_H

template <class T>
class MinMax
{
private:
	T first;
	T second;
public:
	// constructor
	MinMax(T, T);

	// functions to return the minimum value and maximum value, respectively
	T minimum();
	T maximum();
};



// construcor used to create a MinMax object, setting the parameters
// to a 'first' and 'second' number to compare them
template <class T>
MinMax<T>::MinMax(T f, T s)
{
	first = f;
	second = s;
}



// used to return the smaller of the two data types 
template <class T>
T MinMax<T>::minimum()
{
	if (first < second)
	{
		return first;
	}
	else
	{
		return second;
	}
}



// used to return the larger of the two data types 
template <class T>
T MinMax<T>::maximum()
{
	if (first > second)
	{
		return first;
	}
	else
	{
		return second;
	}
}


#endif