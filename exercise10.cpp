// Author: Shokhrukhbek Valijonov
// Student ID: 475154
// Exercise 10: Present Value of an Annuity using While Loop

#include <iostream>
#include <iomanip>
#include <cmath>
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
    double pv = 0.0;
    int t = 1;

    while (t <= years) {
        pv += payment / pow(1 + r, t);
        t++;
    }

    cout << fixed << setprecision(2);
    cout << "Present value of annuity (loop method): " << pv << endl;

    return 0;
}
