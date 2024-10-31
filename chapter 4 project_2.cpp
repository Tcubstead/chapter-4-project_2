// Thomas Cubstead
//10/31/24
//chatper 4 Project
//Main

//Thomas Cubstead
//10/31/24
//Chapter 4 project
//Days_In_Month
//this program will determine if a given year is a leap year and then with that inbformation determine the number of days in the selected month

#include <iostream>
using namespace std;

//funtion to determine if the selected year is a leap year
bool leapYear(int year) {
    if (year % 100 == 0) {
        return year % 400 == 0;
    }
    else {
        return year % 4 == 0;
    }
}

//function that determines the days in any selected month and uses the leap year function to determine the days in feburary
int lengthOfMonth(int month, int year) {
    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        return leapYear(year) ? 29 : 28;
    default:
        return 0;
    }
}

int main() {
    int month, year;

    // Input validation for month
    do {
        cout << "Enter a month (1...12): ";
        cin >> month;
        if (month < 1 || month > 12) {
            cout << "Invalid month. Please try again." << endl;
        }
    } while (month < 1 || month > 12);

    cout << "enter your desired year: ";
    cin >> year;

    int days = lengthOfMonth(month, year);
    cout << days << "days" << endl;
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
