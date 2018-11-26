/*
2297037
Chase Tullar
CPSC350
Assignment 5
11/18/18
*/
//GenPerson
#include <iostream>
using namespace std;
//#pragma once

class GenP
{
	public:
		GenP(); //constr
		//GenP(T id, T name, T level); //ovld constr
		~GenP(); //destr

		int idP;
		string nameP;
		string levelP;
};

GenP::GenP()
{
	//constr
}

GenP::~GenP()
{
	//destr
}