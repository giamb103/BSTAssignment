#include <iostream>
#include "People.h"

template <class A>
class TreeNode{
	public:
		TreeNode();
		TreeNode(A key);

		virtual ~TreeNode();

		A myObject;//value
		int key;//ID

		TreeNode *left;
		TreeNode *right;
};

template <class A>
TreeNode<A> :: TreeNode(){
	left = NULL;
	right = NULL;
}

template <class A>
TreeNode<A> :: TreeNode(A k){
	left = NULL;
	right = NULL;
	key = k.getID();
	myObject = k;
}

template <class A>
TreeNode<A>::~TreeNode()
{
	cout << "TreeNode Destroyed" << endl;
}          