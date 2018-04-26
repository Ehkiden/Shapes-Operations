#include "Cylinder.h"
#include <cmath>
#include <iostream>

using namespace std;

//default constructor
Cylinder::Cylinder():Circle()
{
	radius = 0;
	height = 0;
}
//constructor
Cylinder::Cylinder(double r, double h):Circle(r)
{
	radius = r;
	height = h;
}
//calls the area calulation from the circle class to help compute the area
double Cylinder::Area()
{
	double area = Circle::Area()*2+2*(atan(1)*4)*radius*height;
	return area;
}
//calculates the volume
double Cylinder::Volume()
{
	double volume = (atan(1) * 4)*(pow(radius,2))*height;
	return volume;
}
//displays the required info
void Cylinder::display()
{
	double area = this->Area();
	double volume = this->Volume();
	cout << "Cylinder: (radius = " << radius << ", height = " << height << ")" << endl;
	cout << "The area is: " << area << endl;
	cout << "The volume is: " << volume << endl;
}
