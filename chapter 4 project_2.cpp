// Thomas Cubstead
//10/31/24
//chatper 4 Project
//3_Geometry_Calculator
//a simple calculator program to find the area of a circle, rectance, or triangle

#include <iostream>
using namespace std;

// calculations for different geometric shape's areas and defintion of PI
const double PI = 3.14159;
double circleAreaFormula(double radius) {
	return PI * radius * radius;
}

double rectangleAreaFormula(double length, double width) {
	return length * width;
}

double triangleAreaFormula(double base, double height) {
	return base * height * .5;
}
