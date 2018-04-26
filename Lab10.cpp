//course: CS215-004
//Project: Lab Assignment 10
//Date: 11/09/2016
//Purpose: represent geometric shapes and apply basic operations that can be 
//         performed on them. Use inheritance to relate shapes and implement
//         appropriate functions for each shape.
//Author: Jared Rigdon

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include "shape.h"
#include "rectangle.h"
#include "circle.h"
#include "cuboid.h"
#include "cylinder.h"
#include "sphere.h"


using namespace std;

void pause_215(bool have_newline);

int main()
{
	const double SIZE1 = 10.0;
	const double SIZE2 = 15.0;
	const double SIZE3 = 20.0;
	int option;
	while (true)
	{
		cout << "Please choose one geometric shape to work with: (enter Q or q to quit)" << endl;
		cout << "1. Rectangle" << endl;
		cout << "2. circle" << endl;
		cout << "3. cuboid" << endl;
		cout << "4. cylinder" << endl;
		cout << "5. sphere" << endl;
		cin >> option;
		cin.ignore(256, '\n');

		if (cin.fail())
		{
			string input_to_check;
			cin.clear();
			cin >> input_to_check;
			if (input_to_check == "q" || input_to_check == "Q")
				break;
			else
			{
				cout << "Invalid option!" << endl;
				continue;
			}
		}

		// create an object of the corresponding class based on the user option
		// store the object in the heap pointed by the pointer shapes
		// Use the pointer to indirectly access object's display function
		// after finishing using the space, release the space 
		Shape* shapes = NULL;
		switch (option)
		{
		case 1: shapes = new Rectangle(SIZE1, SIZE2);
			cout << "The shape you choose is rectangle." << endl;
			shapes->display();
			delete shapes;		//release the space from the heap
			break;
		case 2: shapes = new Circle(SIZE1);
			cout << "The shape you choose is circle." << endl;
			shapes->display();
			delete shapes;		//release the space from the heap
			break;
		case 3: shapes = new Cuboid(SIZE1, SIZE2, SIZE3);
			cout << "The shape you choose is cuboid." << endl;
			shapes->display();
			delete shapes;		//release the space from the heap
			break;
		case 4: shapes = new Cylinder(SIZE1, SIZE2);
			cout << "The shape you choose is cylinder." << endl;
			shapes->display();
			delete shapes;		//release the space from the heap
			break;
		case 5: shapes = new Sphere(SIZE1);
			cout << "The shape you choose is sphere." << endl;
			shapes->display();
			delete shapes;		//release the space from the heap
			break;
		default: cout << "Invalid option number!" << endl;
		}
	}

	pause_215(true);
	return 0;
}

void pause_215(bool have_newline)
{
	if (have_newline) {
		// Ignore the newline after the user's previous input.
		cin.ignore(256, '\n');
	}

	// Prompt for the user to press ENTER, then wait for a newline.
	cout << endl << "Press ENTER to continue." << endl;
	cin.ignore(256, '\n');
}
