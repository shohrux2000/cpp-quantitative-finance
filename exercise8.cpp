// Author: Shokhrukhbek Valijonov
// Student ID: 475154
// Exercise 8: Present Value of a Perpetuity

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double payment, rate;

    cout << "Enter yearly payment amount: ";
    cin >> payment;
    cout << "Enter annual interest rate (in %): ";
    cin >> rate;

    double pv = payment / (rate / 100.0);

    cout << fixed << setprecision(2);
    cout << "Present value of perpetuity: " << pv << endl;

    return 0;
}
