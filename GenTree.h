/*
2297037
Chase Tullar
CPSC350
Assignment 5
11/18/18
*/
#include <iostream>
#include "GenBST.h"
using namespace std;

//GenTree class


template <class T> class BST
{
	public:
		BST();
		virtual ~BST();

		void insert(T value);
		bool contains(T value);
		bool deleteNode(T value);
		bool deleteRec(T key);
		bool isEmpty();
		TreeNode<T> getSuccessor(TreeNode<T> *d); //changed from ptr

		void printTree(); //iterative
		void rePrint(TreeNode<T> *node); //inorder traversal

	private:
		TreeNode<T> *root;

};

template <class T> BST<T>::BST()
{
	root = NULL;
}

template <class T> BST<T>::~BST()
{
	//itterate and delete ??
	cout << "Second Tree destroyed" << endl;
}

template <class T> void BST<T>::printTree()
{
	rePrint(root);
}

template <class T> bool BST<T>::isEmpty()
{
	return root == NULL;
}

template <class T> void BST<T>::rePrint(TreeNode<T> *node)
{
	if (node == NULL)
	{
		return;
	}

	rePrint(node->left);
	cout << node->data << endl;
	rePrint(node->right);
}

template <class T> void BST<T>::insert(T value)
{ //check for duplicates, then do this

	TreeNode<T> *node = new TreeNode<T>(value);

	if(isEmpty())
	{
		root = node;
	}

	else //not an empty tree
	{
		TreeNode<T> *current = root;
		TreeNode<T> *parent; //empty node

		while(true)
		{
			//iterate
			parent = current;

			if(value < current->key) //go left
			{
				current = current->left;

				if(current == NULL) //we found insertion pnt
				{
					parent->left = node;
					break;
				}
			}
			else //go right
			{
				current = current->right;

				if(current == NULL) //we found insertion pnt
				{
					parent->right = node;
					break;
				}
			}
		}
	}
}

//search method
template <class T> bool BST<T>::contains(T value)
{
	if(isEmpty())
	{
		return false;
	}

	else //not empty
	{
		TreeNode<T> *current = root;

		while(current->key != value) //search for val
		{
			if(current == NULL)
			{
				return false; //cant find it
			}

			if(value < current->key) //go left
			{
				current->left;
			}

			else //go right
			{
				current->right;
			}
		}
	}

	return true; //if all if/while fail, found value
}

template <class T> bool BST<T>::deleteRec(T k) //uh oh recursion
{
	//can use contains method
	//check empty
	if(!contains(k))
	{
		return false;
	}

	else //delete found node
	{
		TreeNode<T> *parent = root;
		TreeNode<T> *current = root;
		bool isLeft = true;

		//find it
		while(current->key != k)
		{
			parent = current;

			if(k < current->key) //go left
			{
				isLeft = true;
				current = current->left;
			}

			else //go right
			{
				isLeft = false;
				current = current->right;
			}

			if(current == NULL)
			{
				return false;
			}
		}

		//at this point we found the node, now delete it

		//check node has no children : leaf

		if(current->left == NULL && current->right == NULL)
		{
			//leaf, null out parent
			if(current == root)
			{
				root = NULL;
			}

			else if(isLeft)
			{
				parent->left = NULL;
			}

			else
			{
				current->right = NULL;
			}
		}

		//check if node has one child

		else if(current->right == NULL) //no right child, must be a left child
		{
			if(current == root)
			{
				root = current->left; //replace root with left child to delete old root
			}

			else if(isLeft)
			{
				parent->left = current->left;
			}

			else //right child
			{
				parent->right = current->left;
			}
		}

		else if(current->left == NULL) //no right child, must be a left child
		{
			if(current == root)
			{
				root = current->right; //replace root with left child to delete old root
			}

			else if(isLeft)
			{
				parent->left = current->right;
			}

			else //right child
			{
				parent->right = current->right;
			}
		}

		else //node has 2 children, begin to cry
		{
			TreeNode<T> *successor = getSuccessor(current);

			if(current == root)
			{
				root = successor;
			}

			else if(isLeft)
			{
				parent->left = successor;
			}

			else
			{
				parent->right = successor;
			}

			successor->left = current->left;

		}
		return true;
	}


}


template <class T> TreeNode<T> BST<T>::getSuccessor(TreeNode<T> *d) //d is the node we are deleting
{
	TreeNode<T> *sp = d; //successor parent
	TreeNode<T> *successor = d; //should one rihgt, all way left
	TreeNode<T> *current = d->right;

	while(current != NULL)
	{
		sp = successor;
		successor = current;
		current = current->left;
	}

	if(successor != d->right)
	{
		sp->left = successor->right;
		successor->right = d->right;
	}

	return successor;

}










