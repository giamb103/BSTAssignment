#include <iostream>
#include "Faculty.h"
#include "GenBST.h"
#include "Student.h"

using namespace std;

void displayMenu();

int main(int argc, char** argv)
{
	int input;
	int a, b, c; 

	//Faculty masterFaculty;
	//Student masterStudent;
	GenBST<Student> masterStudent;//Student Binary Search Tree
	Student tempStudent(101, "Edgar Delgado", "Junior", "Software Engineering", 4.0, 001); 

	masterStudent.insert(tempStudent);


	a = masterStudent.contains(tempStudent);

	b = masterStudent.isEmpty();

	c = masterStudent.deleteNode(tempStudent.ID);

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	//displayMenu();
	//cin >> input;



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
	cout << "14. Exti" << endl;


}
