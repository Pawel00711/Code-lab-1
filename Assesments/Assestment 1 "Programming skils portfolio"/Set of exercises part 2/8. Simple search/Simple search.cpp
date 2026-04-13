#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare and initialize the array 
    string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};

    // Describe the search term
    string searchName = "Sam";

    // Geting number of elements in the array
    int size = sizeof(names) / sizeof(names[0]);

    // Check if the name was found
    bool found = false;

    // Loop to search for the name
    for (int i = 0; i < size; i++) {
        if (names[i] == searchName) {
            cout << "Name found: " << searchName << " at index " << i << endl;
            found = true;
            break; // Exit loop if name is found
        }
    }

    // If the name was not found, print a message
    if (!found) {
        cout << "Name not found: " << searchName << endl;
    }
