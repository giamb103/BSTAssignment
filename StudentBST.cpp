#include <iostream>

using namespace std;

template <class A>
class StudentBST : publicGenBST{
	public:
		void printAllStudents();

};

template <class A>
void StudentBST<A> :: printAllStudents(){
	TreeNode* curr = root;
	if(curr != NULL){
		printAllStudents(curr->left);
		curr.printStudent();
		printAllStudents(curr->right);
	}
}