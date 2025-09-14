#include <iostream>
#include <string>
using namespace std;

int main() {
    // Correct password
    const string correctPassword = "12345";
    // Variable to store user input
    string attempt;       
    // Maximum allowed attempts
    int maxAttempts = 5;                      
    int attemptsLeft = maxAttempts;          

    cout << "Enter password:" << endl;

    // Loop while there are attempts remaining
    while (attemptsLeft > 0) {
        cout << "Password attempt: ";
        cin >> attempt;  // Get input

        // Check if  password matches the correct password
        if (attempt == correctPassword) {
            cout << "Welcome to the Secure Area" << endl;
            break;  // Exit loop if password is correct
        } else {
            attemptsLeft--;  // Decrement remaining attempts

            // Check how many attempts left
            if (attemptsLeft > 0) {
                cout << "Incorrect password. You have " 
                     << attemptsLeft << " attempt(s) remaining." << endl;
            } else {
                // No attempts left; alert the user
                cout << "Maximum attempts reached! Authorities have been alerted!" << endl;
            }
        }
    }

    return 0;
