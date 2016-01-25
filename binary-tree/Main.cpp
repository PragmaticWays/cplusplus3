#include "BinaryTree.h"

/***********************************
Program Binary Tree Driver - This program demonstrates the binary tree template class
	and utilizes all of it's methods to show its usefulness.

Author:		Adam Allard
Created:	05/06/15
Revisions:	05/07/15 - Implemented the countNodes(), countLeftNodes(), and countTreeHeight()
						methods from the BinaryTree class

***********************************/

int main()
{
	BinaryTree<int> tree;

	tree.insertNode(5);
	tree.insertNode(8);
	tree.insertNode(6);
	tree.insertNode(7);
	tree.insertNode(12);
	tree.insertNode(2);
	tree.insertNode(14);
	tree.insertNode(4);
	tree.insertNode(3);

	cout << endl << "Pre Order:" << endl;
	tree.displayPreOrder();

	if (tree.searchNode(8))
		cout << endl << "8 is in the tree." << endl;
	else
		cout << endl <<  "8 is not in the tree." << endl;

	cout << endl << "Removing 8." << endl;
	tree.remove(8);

	cout << endl << "In Order:" << endl;
	tree.displayInOrder();

	cout << endl << "Post Order:" << endl;
	tree.displayPostOrder();

	if (tree.searchNode(8))
		cout << endl << "8 is in the tree." << endl;
	else
		cout << endl << "8 is not in the tree." << endl;

	cout << endl;
	cout << "There are " << tree.countNodes()		<< " nodes in this tree."			<< endl;
	cout << "There are " << tree.countLeftNodes()	<< " nodes in the left subtree."	<< endl;
	cout << "There are " << tree.countTreeHeight()	<< " levels in this tree."			<< endl;

	cout << endl;
	system("pause");
	return 0;
}