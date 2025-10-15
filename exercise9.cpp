// Author: Shokhrukhbek Valijonov
// Student ID: 475154
// Exercise 9: Annuity or Perpetuity Calculation using Switch

#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdexcept>
using namespace std;

int main() {
    double payment, rate;
    int years;
    char choice;

    cout << "Enter yearly payment amount: ";
    cin >> payment;
    cout << "Enter annual interest rate (in %): ";
    cin >> rate;
    cout << "Enter number of years: ";
    cin >> years;

    cout << "Type 'A' for annuity or 'P' for perpetuity: ";
    cin >> choice;

    double result = 0.0;
    double r = rate / 100.0;

    try {
        switch(choice) {
            case 'A':
            case 'a':
                result = payment * (1 - pow(1 + r, -years)) / r;
                cout << "Present value of annuity: " << result << endl;
                break;
            case 'P':
            case 'p':
                result = payment / r;
                cout << "Present value of perpetuity: " << result << endl;
                break;
            default:
                throw invalid_argument("Invalid option entered.");
        }
    } catch (invalid_argument &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
