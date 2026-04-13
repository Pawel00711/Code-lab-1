#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare and initialize the array 
    string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};

    // Get number of elements
    int size = sizeof(names) / sizeof(names[0]);

    // Variable to store user input
    string searchName;

    // Ask the for a name to search
    cout << "Enter the name to search: ";
    cin >> searchName;

    // Check if the name was found
    bool found = false;

    // Loop to search for the name
    for (int i = 0; i < size; i++) {
        if (names[i] == searchName) {
            cout << "Name found: " << searchName << " at index " << i << endl;
            found = true;
            break;  // Exit loop if the name is found
        }
    }

    // If the name was not found, print message
    if (!found) {
        cout << "Name not found: " << searchName << endl;
    }

    return 0;
}
