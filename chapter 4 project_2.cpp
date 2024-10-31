// Thomas Cubstead
//10/31/24
//chatper 4 Project
//2_Shipping_Charges
//this program calculates the price of shipping for packages of verious weights per 500 miles shipped

#include <iostream>
using namespace std;

//function that determines the cost of shipping per 500 miles based on weight
double shippingRate(double weight) {
	if (weight <= 2) {
			return 1.10;
	} else if (weight <= 6) {
		return 2.20;
	} else if (weight <= 10) {
		return 3.70;
	} else if (weight <= 20) {
		return 4.80;
	} else {
		return 0;
	}
}


int main() {
    double weight, distance;
    // Input validation for weight
    do {
        cout << "Enter the weight of the package (in kg, 0 < weight <= 20): ";
        cin >> weight;
        if (weight <= 0 || weight > 20) {
            cout << "Invalid weight. Please enter a value greater than 0 and less than or equal to 20 kg." << endl;
        }
    } while (weight <= 0 || weight > 20);

    // Input validation for distance
    do {
        cout << "Enter the distance to be shipped (in miles, 10 <= distance <= 3000): ";
        cin >> distance;
        if (distance < 10 || distance > 3000) {
            cout << "Invalid distance. Please enter a value between 10 and 3000 miles." << endl;
        }
    } while (distance < 10 || distance > 3000);

    // Get the shipping rate
    double rate = shippingRate(weight);

    // Calculate the total cost
    double totalCost = (distance / 500) * rate;

    // Display the charges
    cout << "Shipping charges: $" << totalCost << endl;

    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
