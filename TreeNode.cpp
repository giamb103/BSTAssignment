#include <iostream>

template <class A>
class TreeNode{
	public:
		TreeNode();
		TreeNode(int key);

		virtual ~TreeNode();

		int key;

		TreeNode *left;
		TreeNode *right;
};

template <class A>
TreeNode<A> :: TreeNode(){
	left = NULL;
	right = NULL;
}

template <class A>
TreeNode<A> :: TreeNode(int k){
	left = NULL;
	right = NULL;
	key = k;
}