#include <iostream>
#include "Faculty.h"
#include "GenBST.h"
#include "Student.h"

using namespace std;

void displayMenu();

int main(int argc, char** argv)
{
	int input;
	bool continued = true;
	GenBST<Student> masterStudent;//Student Binary Search Tree
	GenBST<Faculty> masterFaculty;//Student Binary Search Tree
	
	while(continued){
		displayMenu();
		cin >> input;

		switch(input){
			case 1:
				masterStudent.printAll();
				break;
			case 2:
				masterFaculty.printAll();
				break;
			case 3:b
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				break;
			case 10:
				break;
			case 11:
				break;
			case 12:
				break;
			case 13:
				break;
			default:
				continued = false;
		}
	}


	return 0;
}

void displayMenu()
{
	cout << "1. Print all students and their information (sorted by ascending id #)" << endl;
	cout << "2. Print all faculty and their information (sorted by ascending id #)" << endl;
	cout << "3. Find and display student information given the students id" << endl;
	cout << "4. Find and display faculty information given the faculty id" << endl;
	cout << "5. Given a student's id, print the name and info of their faculty advisor" << endl;
	cout << "6. Given a faculty id, print ALL the names and info of his/her advisees." << endl;
	cout << "7. Add a new student" << endl;
	cout << "8. Delete a student given the id" << endl;
	cout << "9. Add a new faculty member" << endl;
	cout << "10. Delete a faculty member given the id." << endl;
	cout << "11. Change a student's advisor given the student id and the new faculty id." << endl;
	cout << "12. Remove an advisee from a faculty member given the ids" << endl;
	cout << "13. Rollback" << endl;
	cout << "14. Exit" << endl;


}