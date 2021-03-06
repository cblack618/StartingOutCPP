#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <iostream>
#include <vector>
using namespace std;

class BinaryTree
{
private:
	class BtreeNode
	{
		friend class BinaryTree;
		double value;
		BtreeNode *left;
		BtreeNode *right;
		BtreeNode(double value1, BtreeNode *left1 = NULL, 
								 BtreeNode *right1 = NULL)
		{
			value = value1;
			left = left1;
			right = right1;
		}
	};
	BtreeNode *root;
	int count;
	// Helper functions
	void insert(double, BtreeNode *&);
	bool search(double, BtreeNode *);
	void inorder(vector <double> &, BtreeNode *&);
	int size(BtreeNode *&);
public:
	// Constructor
	BinaryTree(){ root = NULL; }
	// Member functions.
	void insert(double x)
	{ insert(x, root); }
	bool search(double x)
	{ return search(x, root); }
	void inorder(vector <double> &v)
	{ inorder(v, root); }
	int size()
	{ 
		count = 0;
		return size(root);
	}
};
#endif