/*
2297037
Chase Tullar
CPSC350
Assignment 5
11/18/18
*/
#include <iostream>
#include "Faculty.h"
using namespace std;

//Faculty class
Faculty::Faculty()
{
	//constr
	id = 0;
	name;
	level;
	dept;
}

Faculty::Faculty(int id, string name, string level, string dept)
{

}

Faculty::~Faculty()
{
	//destr
}

void Faculty::addF() //add faculty
{
	int id;
	cout << "Enter the ID number" << endl;
	cin >> id;

	string name;
	cout << "Enter the name" << endl;
	cin >> name;

	string level;
	cout << "Enter the level" << endl;
	cin >> level;

	string dept;
	cout << "Enter the specialization" << endl;
	cin >> dept;

	cout << "Enter the student IDs" << endl;

	Faculty *fac = new Faculty(id, name, level, dept); //create new faculty

	//print new faculty
	cout << "New faculty added: " << name << endl;

	cout << "ID: " << id << endl;

	cout << "Level: " << level << endl;

	cout << "Spec: " << dept << endl;
}

int Faculty::getFID()
{
	//return id #
	return id;
}