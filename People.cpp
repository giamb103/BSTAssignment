#include "People.h"

People::People()
{

}

People::People(int ID, string name, string level)
{
	this->ID = ID;
	this->name = name;
	this->level = level;
}

People::~People()
{

}

int People::getID()
{
	return ID;
}

string People::getName()
{
	return name;
}

string People::getLevel()
{
	return level;
}

void People::printObject()
{
	cout << "Name: " << name
	 	<< "\nID#: " << ID
		<< "\nLevel: " << level << endl;
}