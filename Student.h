#include <iostream>

using namespace std;

class Student{
	public:
		string name, level, major
		double gpa
		int id, advisorID;

		bool operator==(Student* a);
		bool operator<(Student* a);
		bool operator>(Student* a);
		bool operator!=(Student* a);

		int getAdvisorID();
		int getID();
		void printStudent();

		Student();
		Student(int id, string name, int idAdv, string level, string major, double gpa);
		~Student();
};