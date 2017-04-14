#include <iostream>
#include "Student.h"

using namespace std;

Student :: Student(){
}

Student :: Student(int id, string name, string level, string major, double gpa, int advisorID) : People(id, name, level)
{
	this->major = major;
	this->gpa = gpa;
	this->advisorID = advisorID;
}

Student :: ~Student()
{
	//cout << "Student Object destroyed"<<endl;
}

bool operator == (Student temp1, Student temp2){//compares student id's
	return (temp1 == temp2);
}

bool operator < (Student temp1, Student temp2){//compares student id's
	return (temp1 < temp2);
}

bool operator > (Student temp1, Student temp2){//compares student id's
	return (temp1 > temp2);
}

bool operator != (Student temp1, Student temp2){//compares student id's
	return (temp1 != temp2);
}

/*int getID()
{
	return ID;
}*/

string Student::getMajor()
{
	return major;
}

double Student::getGPA()
{
	return gpa;
}

int Student :: getAdvisorID(){
	return advisorID;
}

void Student :: printStudent(){
	cout << "Name: " << People::name 
	<< "\tID#: " << People::ID
	<< "\tGrade level: " << People::level 
	<< "\tMajor: " << major
	<< "\tGPA: " << gpa
	<<"\tAdvisor ID: " << advisorID	<< endl;
}