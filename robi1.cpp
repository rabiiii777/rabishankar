//This code is devloped by Rabi
#include <iostream>
using namespace std;

int main() {
    int lowerLimit, upperLimit;

    // Input from user
    cout << "Enter the lower limit: ";
    cin >> lowerLimit;

    cout << "Enter the upper limit: ";
    cin >> upperLimit;

    // Make sure the range is valid
    if (lowerLimit > upperLimit) {
        cout << "Invalid range. Lower limit must be less than or equal to upper limit." << endl;
        return 1;
    }

    // Print even numbers
    cout << "\nEven numbers between " << lowerLimit << " and " << upperLimit << ":\n";
    for (int i = lowerLimit; i <= upperLimit; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    // Print odd numbers
    cout << "\n\nOdd numbers between " << lowerLimit << " and " << upperLimit << ":\n";
    for (int i = lowerLimit; i <= upperLimit; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}

