#include <iostream>

using namespace std;

template <class A>
class GenBST{
	public:
		GenBST();
		~GenBST();

		void insert(A value);
		bool contains(A value); //like the find function
		bool deleteNode(A key);

		bool isEmpty();
		int getMin();//leftmost
		int getMax();//rightmost
		void inOrder(TreeNode n);
		void preOrder(TreeNode n);
		void postOrder(TreeNode n);

		TreeNode* getSuccessor(TreeNode d);//helper function for delete method

	private:
		TreeNode* root;
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
void GenBST<A> :: inOrder(TreeNode n){ //prints out a,b,c,d,e,f,g,h,i
	if(n != NULL){
		inOrder(n->left);
		cout << n->key << endl;
		inOrder(n->right);
	}
}

template <class A>
void GenBST<A> :: postOrder(TreeNode n){ //prints a,c,e,d,b,h,i,g,f
	if(n != NULL){
		postOrder(n->left);
		postOrder(n->right);
		cout << n->key << endl;
	}
}

template <class A>
void GenBST<A> :: preOrder(TreeNode n){ // prints f,b,a,d,c,e,g,i,h
	if (n != NULL)
	{
		cout << n->key << endl;
		postOrder(n->left);
		postOrder(n->right);
	}
} 

template <class A>
TreeNode* GenBST<A> :: getMax(){
	TreeNode current = root;

	if(root == NULL){
		return NULL;
	}

	while(current->right != NULL){
		current = current->right;
	}
	return current;
}

template <class A>
TreeNode* GenBST<A> :: getMin(){
	TreeNode current = root;

	if(root == NULL){
		return NULL;
	}

	while(current->left != NULL){
		current = current->right;
	}
	return current; //or return &(current->key)
}

template <class A>
void GenBST :: insert(A value){//can be recursive
	TreeNode* node = new TreeNode();

	if(root == NULL){ //empty tree
		root = node;
	}
	else{
		TreeNode* curr = root; //start at root
		TreeNode* parent;

		while(true){
			parent = curr;

			if(value < curr->key){//go left
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
	}
	else{
		TreeNode* curr = root;

		while(curr->key != value){
			if(value<curr->key){
				curr = curr->left;
			}
			else
				curr = curr->right;

			if(curr == NULL)
				return false;
		}
	}
	return true;
}

template <class A>
bool GenBST<A> :: deleteNode(A key){
	if(root = NULL){
		return false;
	}

	TreeNode* current = root;
	TreeNode* parent = NULL;
	bool isLeft = true;

	while(current->key != key){
		parent = current;

		if(key < current->key){
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

	if(current->left == NULL; && current->right == NULL;){//leaf node no children
		if(current == root)
			root = NULL;
		else if(isLeft){
			parent->left = NULL;
		}
		else{
			parent->right == NULL;
		}
	}//One child
	else if(current->right == NULL;) //no right child
	{
		if(current == root)
			root = current->left;
		else if(isLeft){
			parent->left = current->left;
		}
		else{
			parent->right = current->left;
		}
	}
	else if(current->left == NULL;) //no right child
	{
		if(current == root)
			root = current->right;
		else if(isLeft){
			parent->left = current->right;
		}
		else{
			parent->right = current->right;
		}
	}//two children
	else{
		
	}
}