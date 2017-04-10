#include <iostream>
#include "Student.h"

using namespace std;

Student :: Student(){
}

Student :: Student(int id, string name, int idAdv, string level, string major, double gpa){
	this->id = id;
	this->name = name;
	advisorID = idAdv;
	this->level = level;
	this->major = major;
	this->gpa = gpa;
}

Student :: ~Student(){
	cout << "Object destroyed"<<endl;
}

bool Student :: operator==(Student* a){//compares student id's
	return id == a->id;g
}

bool Student :: operator<(Student* a){//compares student id's
	return id < a->id;
}

bool Student :: operator>(Student* a){//compares student id's
	return id > a->id;
}

bool Student :: operator!=(Student* a){//compares student id's
	return !(id == a->id);
}

int Student :: getAdvisorID(){
	return advisorID;
}

int Student :: getID(){
	return id;
}

void Student :: printStudent(){
	cout << "Name: " << name <<endl << "\tID: " << id << endl<<"\tAdvisor ID: " << advisorID << endl
		<< "\tGrade level: " << level << endl << "\tMajor: " << major << endl << "\tGPA: " << gpa;
}