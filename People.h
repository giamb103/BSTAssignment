#ifndef PEOPLE_H
#define PEOPLE_H

#include <iostream>
#include <string>

using namespace std;

class People
{
	public:
		int ID;
		string name;
		string level;

		People();
		People(int ID, string name, string level);
		virtual ~People();

		int getID();
		string getName();
		string getLevel();
		void printObject();
};

#endif 