#include <iostream>
#include <string>
#include "DoublyList.h"
#include "People.h"

using namespace std;

class Faculty : public People
{
	public:
	//	int facultyID;
	//	string name;
	//	string level;
		string department;
		DoublyList<int> adiviseesID;

		Faculty();
		Faculty(int ID, string name, string level, string department);
		~Faculty();

	//	int getFacultyID();
	//	string getName();
	//	string getLevel();
		string getDepartment();

		friend bool operator < (Faculty temp1, Faculty temp2);
		friend bool operator > (Faculty temp1, Faculty temp2);
		friend bool operator == (Faculty temp1, Faculty temp2);
		friend bool operator != (Faculty temp1, Faculty temp2);
		void printFaculty();

};