/*
2297037
Chase Tullar
CPSC350
Assignment 5
11/18/18
*/
#include <iostream>
#include "GenTree.h"
#include "Students.h"
#include "Faculty.h"
using namespace std;

//main
int main(int argc, char **argv)
{
	cout << "Welcome to the database." << endl;
	cout << "Type 1-14 to select a command." << endl;

	//input var
	bool inBounds = true;
	int input;
	int cntr; //infinite loo[ counter]



	BST<Student*> bst; //TREE OF STUDENT PTRS
	BST<Faculty*> bsf; //TREE OF FACULTY


	bool con = true; //redisplay menu

	while(con == true)
	{
		++cntr;

		//display commands
		cout << "1) Print all student info" << endl;
		cout << "2) Print all faculty info" << endl;
		cout << "3) Print one student info" << endl;
		cout << "4) Print one faculty info" << endl;
		cout << "5) Print info of a student's advisor" << endl;
		cout << "6) Print all students' info under an advisor" << endl;
		cout << "7) Add a student" << endl;
		cout << "8) Delete a student" << endl;
		cout << "9) Add a faculty member" << endl;
		cout << "10) Delete a faculty member" << endl;
		cout << "11) Change a student's advisor" << endl;
		cout << "12) Remove an advisee from a faculty member" << endl;
		cout << "13) RollBack" << endl;
		cout << "14) Exit" << endl;
		//END MENU
		cin >> input;

		while(inBounds == true)
		{
			for (int i = 0; i < 16; ++i)
			{
				//cout << "i-" << i << endl;

				if(input == i) //we find the command
				{
					inBounds = false; //break loop to check input
					//cout << "found command" << endl;
					break; //exit loop
				}

				if(i >= 15)
				{
					cout << "Input out of command bounds. Try again" << endl;
					cin >> input;
					i = 0;
				}
			}


		}

		cout << "You chose command " << input << endl;

		if(input == 14) //exit
		{
			cout << "Exiting..." << endl;
			exit(0);
		}

		else if(input == 13) //com z
		{
			cout << "Command Z" << endl;
			//do this somehow

			string ch;
			cout << "Would you like to exit? y/n" << endl;
			cin >> ch;

			while(ch != "y" && ch != "n")
			{
				cout << "Wrong input, type y or n" << endl;
				cin >> ch;
			}

			if(ch == "y")
			{
				cout << "Exiting..." << endl;
				exit(0);
			}
		}

		else if(input == 7) //add a student
		{
			Student *studs = studs->addS(); //create instance of student


			bst.insert(studs); //insert student

			string ans;
			cout << "Would you like to add another student? y/n" << endl;
			cin >> ans;

			while(ans != "y" && ans != "n")
			{
				++cntr;
				cout << "Wrong input, type " << endl;
				cin >> ans;

				if(cntr >= 10)
				{
					cout << "Loop, exiting..." << endl;
					exit(0);
				}
			}

			if(ans == "y")
			{
				cout << "Redisplaying menu..." << endl;
			}

		}

		else if(input == 1) //print student info
		{
			cout << "ALL STUDENTS" << endl;

		}

		else if(input == 9) //add a faculty
		{
			Faculty *fac; //create faculty

			fac->addF(); //add faculty

			bsf.insert(fac); //insert fac

			string ansF;
			cout << "Would you like to add another student? y/n" << endl;
			cin >> ansF;

			while(ansF != "y" && ansF != "n")
			{
				++cntr;
				cout << "Wrong input, type " << endl;
				cin >> ansF;

				if(cntr >= 10)
				{
					cout << "Loop, exiting..." << endl;
					exit(0);
				}
			}

			if(ansF == "y")
			{
				cout << "Redisplaying menu..." << endl;
			}



		}

		else if(input == 2) //print f
		{
			cout << "ALL FACULTY" << endl;

		}

		else if(input == 3) //print a student
		{
			int idS;
			cout << "Enter the ID for the desired student" << endl;
			cin >> idS;

		}

		else if(input == 4) //add a student
		{
			cout << "Enter the ID for the desired faculty" << endl;

		}

		else if(input == 5) //print advisor info
		{
			cout << "Enter the ID for the desired student's advisor info" << endl;

		}

		else if(input == 6) //add a student
		{
			cout << "Enter the ID for the faculty member's student info" << endl;

		}

		else if(input == 8) //add a student
		{
			cout << "Enter the ID for the student to delete" << endl;

		}

		else if(input == 10) //add a student
		{
			cout << "Enter the ID for the desired faculty member to delete" << endl;

		}

		else if(input == 11) //add a student
		{
			cout << "Enter the ID for the desired student" << endl;

		}

		else if(input == 12) //add a student
		{
			cout << "Enter the ID for the desired faculty member" << endl;

		}

		if(cntr >= 10)
		{
			cout << "Loop, exiting..." << endl;
			exit(0);
		}

	}


}