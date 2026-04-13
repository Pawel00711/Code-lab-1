#include <iostream>
#include <string>
using namespace std;

int main() {
    // Correct password
    const string correctPassword = "12345";  
    string attempt;

    cout << "Enter password:" << endl;

    // Keep looping until user enters the correct password
    while (true) {
        cout << "Password attempt: ";
        cin >> attempt;  // Read input (no spaces allowed)


        if (attempt == correctPassword) {
            cout << "Welcome to the Secure Area" << endl;
            break;  // Exit the loop when password is correct
        } else {
            cout << "Incorrect password, try again." << endl; 
        }
    }

    return 0;
}
