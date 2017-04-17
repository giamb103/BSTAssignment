#include <iostream>
#include "TreeNode.h" 
//#include "Student.h"

using namespace std;

template <class A>
class GenBST{
	public:
		GenBST();
		virtual ~GenBST();

		void insert(A value);
		bool contains(A value); //like the find function
		bool deleteNode(int key);

		bool isEmpty();
		A* getMin();//leftmost
		A* getMax();//rightmost
		void inOrder(A* n);
		void preOrder(A* n);
		void postOrder(A* n);
		
		void printAdv(int idNum);//prints the advisees/advisor of the current node
		void printNode(int idNum);//prints the info of the student/faculty

		TreeNode<A>* getSuccessor(TreeNode<A>* d);//helper function for delete method

	private:
		TreeNode<A>* root;
};

template <class A>
GenBST<A> :: GenBST(){
	root = NULL;
}

template <class A>
GenBST<A> :: ~GenBST(){
	//iterate and delete
	//linear
}

template <class A>
bool GenBST<A>::isEmpty()
{
	if(root == NULL)
		return true;
	else
		return false;
}

template <class A>
void GenBST<A> :: inOrder(A* n){ //prints out a,b,c,d,e,f,g,h,i
	if(n != NULL){
		inOrder(n->left);
		cout << n->key << endl;
		inOrder(n->right);
	}
}

template <class A>
void GenBST<A> :: postOrder(A* n){ //prints a,c,e,d,b,h,i,g,f
	if(n != NULL){
		postOrder(n->left);
		postOrder(n->right);
		cout << n->key << endl;
	}
}

template <class A>
void GenBST<A> :: preOrder(A* n){ // prints f,b,a,d,c,e,g,i,h
	if (n != NULL)
	{
		cout << n->key << endl;
		postOrder(n->left);
		postOrder(n->right);
	}
} 

template <class A>
A* GenBST<A> :: getMax(){
	A current = root;

	if(root == NULL){
		return NULL;
	}

	while(current->right != NULL){
		current = current->right;
	}
	return current;
}

template <class A>
A* GenBST<A> :: getMin(){
	A current = root;

	if(root == NULL){
		return NULL;
	}

	while(current->left != NULL){
		current = current->right;
	}
	return current; //or return &(current->key)
}

template <class A>
void GenBST<A>::insert(A value){//can be recursive
	TreeNode<A>* node = new TreeNode<A>(value);

	if(root == NULL){ //empty tree
		root = node;
	}
	else{
		TreeNode<A>* curr = root; //start at root
		TreeNode<A>* parent;

		while(true){
			parent = curr;

			if(value.ID < curr->key){//go left
				curr = curr->left;
				if(curr == NULL){
					parent->left = node;
					break;
				}
			}
			else //go right
			{
				curr = curr->right;
				if(curr == NULL){
					parent->right = node;
					break;
			}
			}
		}
	}
}

template <class A>
bool GenBST<A> :: contains(A value){
	if(root == NULL){
		return false;
		cout << "INside  Null" << endl;
	}
	else
	{
		TreeNode<A>* curr = root;
		value.printStudent();
		//cout << "Value: " << value << endl;
		while(curr->key != value.ID)
		{
			if(value.ID < curr->key){
				curr = curr->left;
			}
			else
			{
				curr = curr->right;
			}
			if(curr == NULL)
			{
				return false;
			}
		}
	}
	return true;
}

template <class A>
bool GenBST<A> :: deleteNode(int key){
	if(root == NULL){//empty tree
		return false;
	}

	TreeNode<A>* current = root;//starts at root
	TreeNode<A>* parent = NULL;
	bool isLeft = true;

	while(current->key != key){
		parent = current;

		if(key < current->key){//go left
			isLeft = true;
			current = current->left;
		}
		else{
			isLeft = false;
			current = current->right;
		}

		if(current == NULL)
			return false;
	}

	//we found what needs to be deleted

	//no children

	if(current->left == NULL && current->right == NULL){//leaf node no children
		if(current == root)
			root = NULL;
		else if(isLeft){
			parent->left = NULL;
		}
		else{
			parent->right = NULL;
		}
	}

	//One child
	else if(current->right == NULL) //no right child
	{
		cout << "\tD" << endl;
		if(current == root)
			root = current->left;
		else if(isLeft){
			parent->left = current->left;
		}
		else{
			parent->right = current->left;
		}
	}
	else if(current->left == NULL) //no left child
	{
		cout << "\tE" << endl;
		if(current == root)
			root = current->right;
		else if(isLeft){
			parent->left = current->right;
		}
		else{
			parent->right = current->right;
		}
	}

	//TWO CHILDREN!!!!!
	else
	{
		cout << "\tF" << endl;
		TreeNode<A>* successor = getSuccessor(current);

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

template <class A>
TreeNode<A>* GenBST<A>::getSuccessor(TreeNode<A>* d)//node to be deleted
{
	TreeNode<A>* sp = d; //succesor's parent
	TreeNode<A>* successor = d; //will be one right, all the way left
	TreeNode<A>* current = d->right;

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

template <class A>
void GenBST<A> :: printNode(int idNum)//prints a student/faculty with the given ID
{
	if(root == NULL){
		return false;
	}
	else
	{
		TreeNode<A>* curr = root;
		while(curr->key != idNum)
		{
			if(idNum < curr->key){
				curr = curr->left;
			}
			else
			{
				curr = curr->right;
			}
			if(curr == NULL)
			{
				cout << "There is no member with that ID." << endl;
			}
		}

		curr.print();
	}	
}

template <class A>
void GenBST<A> :: printAdv(int idNum)//prints the advisor of a specific node
{
	int tempID;
	if(root == NULL){
		return false;
	}
	else
	{
		TreeNode<A>* curr = root;
		while(curr->key != idNum)
		{
			if(idNum < curr->key){
				curr = curr->left;
			}
			else
			{
				curr = curr->right;
			}
			if(curr == NULL)
			{
				cout << "There is no member with that ID." << endl;
			}
		}

		tempID = curr.getAdvisorID();//how to print faculty from here?b


	}	
}