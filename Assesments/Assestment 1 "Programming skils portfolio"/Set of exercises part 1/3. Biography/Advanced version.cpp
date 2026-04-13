#include <iostream>
#include <string>
#include <cctype>
using namespace std;

//Verify if string contains only letters and spaces
bool isLettersAndSpaces(const string& str) {
    if (str.empty()) return false;
    for (char ch : str) {
        if (!isalpha(ch) && !isspace(ch)) {
            return false;
        }
    }
    return true;
}

// Verify if string contains only digits
bool isValidNumber(const string& str) {
    if (str.empty()) return false;
    for (char ch : str) {
        if (!isdigit(ch)) return false;
    }
    return true;
}

int main() {
    string name;
    string hometown;
    string ageInput;
    int age;

    // Asking for name and validating
    while (true) {
        cout << "Enter your full name: ";
        getline(cin, name);
    // Validate characters are letter and spaces only
        if (isLettersAndSpaces(name)) {
            break;
        } else {
    // Error output
            cout << "Invalid name. Please use letters and spaces only." << endl;
        }
    }

    // Asking for hometown and validating
    while (true) {
        cout << "Enter your hometown: ";
        getline(cin, hometown);
    // Validate characters are letters and spaces only
        if (isLettersAndSpaces(hometown)) {
            break;
        } else {
    // Error output
            cout << "Invalid hometown. Please use letters and spaces only." << endl;
        }
    }

    // Asking for age 
    while (true) {
        cout << "Enter your age: ";
        getline(cin, ageInput);
    // Validate characters are numbers only
        if (isValidNumber(ageInput)) {
            age = stoi(ageInput);
            break;
        } else {
    // Error output
            cout << "Invalid age. Please enter numbers only." << endl;
        }
    }

    // Final output with one cout as required
    cout << "Name: " << name << "\nHometown: " << hometown << "\nAge: " << age << endl;

    return 0;
}
