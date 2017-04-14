#include "Faculty.h"

Faculty::Faculty()
{

}

Faculty::Faculty(int ID, string name, string level, string department) : People(ID, name, level)
{
	this->department = department;
}

Faculty::~Faculty()
{
	cout << "Faculty Object Destroyed" << endl;
}

string Faculty::getDepartment()
{
	return department;
}

bool operator < (Faculty temp1, Faculty temp2)
{
	return (temp1 < temp2);
}

bool operator > (Faculty temp1, Faculty temp2)
{
	return (temp1 > temp2);
}

bool operator == (Faculty temp1, Faculty temp2)
{
	return (temp1 == temp2);
}	

bool operator != (Faculty temp1, Faculty temp2)
{
	return (temp1 != temp2);
}

void Faculty::printFaculty()
{
	cout << "Name: " << name
		 << "\nID#: " << ID
		<< "\nLevel: " << level 
		<< "\nDepartment: " << department << endl;
}