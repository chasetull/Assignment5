/*
2297037
Chase Tullar
CPSC350
Assignment 5
11/18/18
*/
#include <iostream>
using namespace std;

//gen bst

template <class T> class TreeNode
{
	public:
		TreeNode();
		TreeNode(T key);
		virtual ~TreeNode();

		T key;
		TreeNode<T> *left;
		TreeNode<T> *right;
};

//generic implementation
template <class T> TreeNode<T>::TreeNode()
{
	//const
	left = NULL;
	right = NULL;

}

template <class T> TreeNode<T>::TreeNode(T k)
{
	//ovrld
	left = NULL;
	right = NULL;
	key = k;
}

template <class T> TreeNode<T>::~TreeNode()
{
	//destr
	cout << "Tree destroyed" << endl;
}