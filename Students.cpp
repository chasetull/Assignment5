/*
2297037
Chase Tullar
CPSC350
Assignment 5
11/18/18
*/
#include <iostream>
#include "Students.h"
using namespace std;
//#include "GenP.h"

//student class .cpp

Student::Student()
{
	//constr
	id;
	name;
	level;
	major;
	gpa = 0;
	advisor = 0;
}

Student::Student(int id, string name, string level, string major, double gpa, int advisor)
{
	//this->id = id;
}

Student::~Student()
{
	//destr
}

void Student::printS()
{
	//a LOT of get() methods
}

Student* Student::addS()
{
	int id;
	cout << "Enter a number sequence, fewer than 8" << endl;
	cin >> id;
	//cout << id << endl;

	string name;
	cout << "Enter a name" << endl;
	cin >> name;

	string level;
	cout << "Enter grade" << endl;
	cin >> level;

	string major;
	cout << "Enter major" << endl;
	cin >> major;

	double gpa;
	cout << "Enter gpa" << endl;
	cin >> gpa;

	int advisor;
	cout << "Enter a new or existing faculty id as advisor" << endl;
	cin >> advisor;

	Student *stud = new Student(id, name, level, major, gpa, advisor); //new student
	//cout << stud->getID() << endl;

	//stud->setID();

	cout << "New student added: " << name << endl;

	cout << "Grade: " << level << endl;

	cout << "Major: " << major << endl;

	cout << "ID: " << id << endl;

	cout << "GPA: " << gpa << endl;

	//stud.getID() //get ID # to pass student reference into tree node

	//return stud; //return id ^
	//stud->insert();
	return stud;


}


int Student::getID(Student *stud) //return student id #
{
	//cout << "Enter the ID number for the student"

	return stud->id;
}

void Student::setID()
{
	this->id = id;
}
