/*
2297037
Chase Tullar
CPSC350
Assignment 5
11/18/18
*/
#include <iostream>
using namespace std;
//#include "GenP.h"
//#pragma once

//student class

class Student //: public GenP
{
	public:
		Student();
		Student(int id, string name, string level, string major, double gpa, int advisor); //new student
		~Student();

		//vars
		int id; //student id
		string name; //name
		string level; //fresh/soph
		string major; //major
		double gpa; //gpa
		int advisor; //id num of advisor

		//methods
		void printS(); //print all students
		Student* addS(); //add student
		void changeAd(); //change advisor
		void deleteS(); //delete student
		void printSO(int i); //print student by id

		int getID(Student *stud); //return id number
		void setID();


};