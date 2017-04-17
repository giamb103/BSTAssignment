#include <iostream>
#include "People.h"

using namespace std;

class Student : public People
{
	public:
		//string name;
		//string level;
		//string studentID;
		string major;
		double gpa;
		int advisorID;

		Student();
		Student(int id, string name, string level, string major, double gpa, int idAdv);
		~Student();

		friend bool operator == (Student temp1, Student temp2);
		friend bool operator < (Student temp1, Student temp2);
		friend bool operator > (Student temp1, Student temp2);
		friend bool operator != (Student temp1, Student temp2);

		//int getID();
		string getMajor();
		double getGPA();
		int getAdvisorID();

		void printStudent();
		void printInfo();
};