/*******************************************
Class Stack.h

This class is a template dynamic stack class which can 
	push or pop items of a certain data type onto or off of a list. 

Author:		Adam Allard
Created:	04/25/15
Revisions:	04/25/15 - Initial
********************************************/

#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;

template <class T>
class Stack
{
private:

	struct StackNode
	{
		T value;
		StackNode *next;
	};

	StackNode *top;

public:
	Stack();
	~Stack();

	void push(T);
	bool pop(T &);
	bool isEmpty();
};

/************** constructor ***************/
template <class T>
Stack<T>::Stack()
{
	top = nullptr;
}

/************** destructor ***************/
template <class T>
Stack<T>::~Stack()
{
	StackNode *nodePtr,
			  *nextNode;

	nodePtr = top;

	while (nodePtr != nullptr)
	{
		nextNode = nodePtr->next;
		delete nodePtr;
		nodePtr = nextNode;
	}
}

/************** push ***************/
template <class T>
void Stack<T>::push(T item)
{
	StackNode *newNode = nullptr;

	newNode = new StackNode;
	newNode->value = item;

	if (isEmpty())
	{
		top = newNode;
		newNode->next = nullptr;
	}
	else
	{
		newNode->next = top;
		top = newNode;
	}
}

/************** pop ***************/
template <class T>
bool Stack<T>::pop(T &item)
{
	bool status;
	StackNode *temp = nullptr;

	if (isEmpty())
		status = false;
	else
	{
		item = top->value;
		temp = top->next;
		delete top;
		top = temp;
		status = true;
	}

	return status;
}

/************** is empty ***************/
template <class T>
bool Stack<T>::isEmpty()
{
	bool status;

	if (!top)
		status = true;
	else
		status = false;

	return status;
}

#endif