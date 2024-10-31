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

//user input and menu
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
		switch (choice) {
		case 1:
			cout << "enter the radius of the circle: ";
			cin >> radius;
			if (radius < 0) {
				cout << "invalid input. Radius can not be negative" << endl;
			} else {
				cout << "Area of the circle: " << circleAreaFormula(radius) << endl << endl;
			}
			break;

		case 2:
			cout << "Enter the length and width of the rectangle: ";
			cin >> length >> width;
			if (length < 0 || width < 0) {
				cout << "invalid input. inputs can not be negative" << endl;
			} else {
				cout << "Area of the rectangle: " << rectangleAreaFormula(length, width) << endl << endl;
			}
			break;

		case 3:
			cout << "Enter the base and height of the triangle: ";
			cin >> base >> height;
			if (base < 0 || height < 0) {
				cout << "invalid input. base and height can not be negative" << endl;
			}
			else {
				cout << "Area of the triangle: " << triangleAreaFormula(base, height) << endl << endl;
			}
			break;
		case 4:
			cout << "returning to start" << endl << endl;
			break;
		}
	} while (choice != 4);
	return 0;
}