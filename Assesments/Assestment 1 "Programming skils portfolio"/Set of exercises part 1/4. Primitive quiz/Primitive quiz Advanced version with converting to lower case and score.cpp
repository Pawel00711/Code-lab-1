#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//Function converts to lowercase
string toLowercase(const string& str) {
    string lowerStr = str;
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    return lowerStr;
}

int main() {
    int score = 0;
    string answer;

    cout << "Welcome to Quiz!" << endl << endl;

    cout << "What is the capital of France?" << endl;
    cout << "Your answer: ";
    getline(cin, answer);
    if (toLowercase(answer) == "paris") {
        cout << "Correct!" << endl << endl;
        score++;
    } else {
        cout << "Wrong answer." << endl << endl;
    }

    cout << "What is the capital of Germany?" << endl;
    cout << "Your answer: ";
    getline(cin, answer);
    if (toLowercase(answer) == "berlin") {
        cout << "Correct!" << endl << endl;
        score++;
    } else {
        cout << "Wrong answer." << endl << endl;
    }

    cout << "What is the capital of Italy?" << endl;
    cout << "Your answer: ";
    getline(cin, answer);
    if (toLowercase(answer) == "rome") {
        cout << "Correct!" << endl << endl;
        score++;
    } else {
        cout << "Wrong answer." << endl << endl;
    }

    cout << "What is the capital of Spain?" << endl;
    cout << "Your answer: ";
    getline(cin, answer);
    if (toLowercase(answer) == "madrid") {
        cout << "Correct!" << endl << endl;
        score++;
    } else {
        cout << "Wrong answer." << endl << endl;
    }

    cout << "What is the capital of Portugal?" << endl;
    cout << "Your answer: ";
    getline(cin, answer);
    if (toLowercase(answer) == "lisbon") {
        cout << "Correct!" << endl << endl;
        score++;
    } else {
        cout << "Wrong answer." << endl << endl;
    }
