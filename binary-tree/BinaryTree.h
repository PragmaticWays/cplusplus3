#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <iostream>
using namespace std;

/***********************************
Class BinaryTree.h - This class is a template binary tree class. It has methods to insert, remove, search, 
	display in order, display pre order, display post order, count the total number of items, count how many
	items are on the left side, and count how many levels are in the tree.

Author:		Adam Allard
Created:	05/06/15
Revisions:	05/07/15 - Added the countNodes(), countLeftNodes(), and countTreeHeight()
methods from the BinaryTree class

***********************************/

template <class T>
class BinaryTree
{
private:
	struct TreeNode
	{
		T value;
		TreeNode *left;
		TreeNode *right;
	};

	TreeNode *root;

	int totalNodes;
	int leftNodes;
	int treeHeight;

	void insert(TreeNode *&, TreeNode *&);
	void destroySubTree(TreeNode *);
	void deleteNode(T, TreeNode *&);
	void makeDeletion(TreeNode *&);

	void displayInOrder(TreeNode *) const;
	void displayPreOrder(TreeNode *) const;
	void displayPostOrder(TreeNode *) const;

	int countNodes(TreeNode *);
	int countLeftNodes(TreeNode *);
	int countTreeHeight(TreeNode *);
	int max(T, T);

public:

	BinaryTree()
		{ root = nullptr; }

	~BinaryTree()
		{ destroySubTree(root); }

	void insertNode(T);
	bool searchNode(T);
	void remove(T);

	void displayInOrder() const
		{ displayInOrder(root); }

	void displayPreOrder() const
		{ displayPreOrder(root); }

	void displayPostOrder() const
		{ displayPostOrder(root); }

	int countNodes()
	{
		countNodes(root);
		return totalNodes;
	}

	int  countLeftNodes()
	{
		countLeftNodes(root->left);
		return leftNodes;
	}

	int countTreeHeight()
	{
		countTreeHeight(root);
		return treeHeight;
	}
};

// private method
template <class T>
void BinaryTree<T>::insert(TreeNode *&nodePtr, TreeNode *&newNode)
{
	if (!nodePtr)
		nodePtr = newNode;
	else if (newNode->value < nodePtr->value)
		insert(nodePtr->left, newNode);
	else
		insert(nodePtr->right, newNode);
}

// public method - user interacts
template <class T>
void BinaryTree<T>::insertNode(T item)
{
	TreeNode *newNode = nullptr;

	newNode = new TreeNode;
	newNode->value = item;
	newNode->left = newNode->right = nullptr;

	insert(root, newNode);
}

template <class T>
void BinaryTree<T>::destroySubTree(TreeNode *nodePtr)
{
	if (nodePtr)
	{
		if (nodePtr->left)
			destroySubTree(nodePtr->left);
		if (nodePtr->right)
			destroySubTree(nodePtr->right);
		delete nodePtr;
	}
}

template <class T>
bool BinaryTree<T>::searchNode(T item)
{
	TreeNode *nodePtr = root;

	while (nodePtr)
	{
		if (nodePtr->value == item)
			return true;
		else if (item < nodePtr->value)
			nodePtr = nodePtr->left;
		else
			nodePtr = nodePtr->right;
	}
	return false;
}

// public method - user interacts
template <class T>
void BinaryTree<T>::remove(T item)
{
	deleteNode(item, root);
}

// private method
template <class T>
void BinaryTree<T>::deleteNode(T item, TreeNode *&nodePtr)
{
	if (item < nodePtr->value)
		deleteNode(item, nodePtr->left);
	else if (item > nodePtr->value)
		deleteNode(item, nodePtr->right);
	else
		makeDeletion(nodePtr);
}

// private method
template <class T>
void BinaryTree<T>::makeDeletion(TreeNode *&nodePtr)
{
	TreeNode *tempNodePtr = nullptr;

	if (!nodePtr)
		cout << "Cannot delete empty node." << endl;
	else if (!nodePtr->right)
	{
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->left;
		delete tempNodePtr;
	}
	else if (!nodePtr->left)
	{
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->right;
		delete tempNodePtr;
	}
	else
	{
		tempNodePtr = nodePtr->right;

		while (tempNodePtr->left)
		{
			tempNodePtr = tempNodePtr->left;
		}

		tempNodePtr->left = nodePtr->left;
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->right;
		delete tempNodePtr;
	}
}

template <class T>
void BinaryTree<T>::displayInOrder(TreeNode *nodePtr) const
{
	if (nodePtr)
	{
		displayInOrder(nodePtr->left);
		cout << nodePtr->value << endl;
		displayInOrder(nodePtr->right);
	}
}

template <class T>
void BinaryTree<T>::displayPreOrder(TreeNode *nodePtr) const
{
	if (nodePtr)
	{
		cout << nodePtr->value << endl;
		displayPreOrder(nodePtr->left);
		displayPreOrder(nodePtr->right);
	}
}

template <class T>
void BinaryTree<T>::displayPostOrder(TreeNode *nodePtr) const
{
	if (nodePtr)
	{
		displayPostOrder(nodePtr->left);
		displayPostOrder(nodePtr->right);
		cout << nodePtr->value << endl;
	}
}

// count the total number of nodes in tree
template <class T>
int BinaryTree<T>::countNodes(TreeNode *nodePtr)
{
	if (!nodePtr)
		return 0;
	else
	{
		totalNodes++;
		countNodes(nodePtr->left);
		countNodes(nodePtr->right);
	}
}

// count the number of nodes in left subtree
template <class T>
int BinaryTree<T>::countLeftNodes(TreeNode *nodePtr)
{
	if (!nodePtr)
		return 0;
	else
	{
		leftNodes++;
		countLeftNodes(nodePtr->left);
		if (nodePtr != root)
			countLeftNodes(nodePtr->right);
	}
}

// count how many levels the tree is
template <class T>
int BinaryTree<T>::countTreeHeight(TreeNode *nodePtr)
{
	if (!nodePtr)
		return 0;
	else
	{
		treeHeight = max(countTreeHeight(nodePtr->left), countTreeHeight(nodePtr->right)) + 1;
		return treeHeight;
	}
}

// private function used for the countTreeHeight method
template <class T>
int BinaryTree<T>::max(T x, T y)
{
	if (x > y)
		return x;
	else
		return y;
}
#endif