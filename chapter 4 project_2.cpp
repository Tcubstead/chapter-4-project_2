// Thomas Cubstead
//10/31/24
//chatper 4 Project
//3_Geometry_Calculator
//a simple calculator program to find the area of a circle, rectance, or triangle

#include <iostream>
using namespace std;

// calculations for different geometric shape's areas
const double PI = 3.14159
double circleAreaFormula(double radius) {
	return PI * radius * radius;
}

double rectangleAreaFormula(double length, width) {
	return length * width;
}

double triangleAreaFormula(double base, height) {
	return base * height * .5;
}

int main() {
	int choice;
	double radius, length, width, base, height;
	do {
		cout << "geometry claculator" << endl;
		cout << "1)clalculate the area of a circle" << endl;
		cout << "2)calculate the area of a rectangle" << endl;
		cout << "3)calculate the area of a triangle" << endl;
		cout << "4)quit" << endl;
		cout << "enter your choice (1...4)";
		cin >> choice;

		//validate choice
		if (choice < 1 || choice > 4) {
			cout << "invalid choice. Please try again: " << endl;
			continue;
		}

	}
}