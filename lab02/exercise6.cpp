// Author: Shokhrukhbek Valijonov
// Student ID: 475154
// Exercise 6: Rewriting example07 with if / else if conditions

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer between 1 and 5: ";
    cin >> number;

    if (number == 1)
        cout << "One";
    else if (number == 2)
        cout << "Two";
    else if (number == 3)
        cout << "Three";
    else if (number == 4)
        cout << "Four";
    else if (number == 5)
        cout << "Five";
    else
        cout << "Invalid number";

    cout << endl;
    return 0;
}
