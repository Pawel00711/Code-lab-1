#include <iostream>
using namespace std;

int main() {
    int month;

    // Ask the user to enter the month number
    cout << "Enter the month number (1-12): ";
    cin >> month;

    // Use a switch statement to resolve the number of days in the month
    switch (month) {
        // Months with 31 days
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            cout << "Months with 31 days." << endl;
            break;

        // Months with 30 days
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            cout << "Months with 30 days." << endl;
            break;

        // February have 28 or 29 days depends on leap year
        case 2:  // February
            cout << "Months wit 28 or 29 days." << endl;
            break;

        // error output
        default:
            cout << "Invalid month number. Please enter a number between 1 and 12." << endl;
            break;
    }
