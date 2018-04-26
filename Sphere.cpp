#include "Sphere.h"
#include <cmath>
#include <iostream>

using namespace std;

//default constructor
Sphere::Sphere():Circle()
{
	radius = 0;
}
//constructor
Sphere::Sphere(double r):Circle(r)
{
	radius = r;
}
//calls the circle class to help compute the area
double Sphere::Area()
{
	double area = Circle::Area()*4;
	return area;
}
//calculated the volume
double Sphere::Volume()
{
	double volume = (4.0/3.0)*(atan(1)*4)*(pow(radius,3));
	return volume;
}
//displays the required info
void Sphere::display()
{
	double area = this->Area();
	double volume = this->Volume();
	cout << "Sphere: (radius = " << radius << ")" << endl;
	cout << "The area is: " << area << endl;
	cout << "The volume is: " << volume << endl;
}
