// Adam Allard
// CISS_243_DEB
// Main.cpp

// This program demonstrates an abstract base class and overriding a pure virtual function
// This program creates a Circle object and a Rectangle object (both derived from the 
// BasicShape class) and displays their areas

#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

void displayArea(BasicShape* shape);

int main()
{
	   // create a Circle object pointer - cirPtr
	   // create a Circle object - cir
	   // point the pointer to the object's address
	Circle *cirPtr = nullptr;
	Circle cir(5, 2, 3.0);
	cirPtr = &cir;

	   // create a Rectangle object pointer - recPtr
	   // create a Rectangle object - rec
	   // point the pointer to the object's address
	Rectangle *recPtr = nullptr;
	Rectangle rec(7, 8);
	recPtr = &rec;

	   // call the displayArea function on both shapes to display the area
	displayArea(cirPtr);
	displayArea(recPtr);

	system("pause");
	return 0;
}

// this function displays the area of the shape passed to it
void displayArea(BasicShape* shape)
{
	cout << shape->getArea() << endl;
}