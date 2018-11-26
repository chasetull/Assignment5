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

//Faculty class

class Faculty //: public GenP
{
	public:
		Faculty(); //constr
		Faculty(int id, string name, string level, string dept);
		~Faculty(); //destr

		int id; //id num
		string name; //name
		string level; //lecturer, assist prof, prof
		string dept; //math, anthro
		//LIST OF ADVISEES NUM IDS

		int getFID(); //return id #
		void addF(); //add F
};