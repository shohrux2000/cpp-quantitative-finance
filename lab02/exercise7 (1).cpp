// Author: Shokhrukhbek Valijonov
// Student ID: 475154
// Exercise 7: Present Value of an Annuity

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double payment, rate;
    int years;

    cout << "Enter yearly payment amount: ";
    cin >> payment;
    cout << "Enter annual interest rate (in %): ";
    cin >> rate;
    cout << "Enter number of years: ";
    cin >> years;

    double r = rate / 100.0;
    double pv = payment * (1 - pow(1 + r, -years)) / r;

    cout << fixed << setprecision(2);
    cout << "Present value of annuity: " << pv << endl;

    return 0;
}
