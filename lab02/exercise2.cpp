// Author: Shokhrukhbek Valijonov
// Student ID: 475154
// Exercise 2: Tripled Deposit without Loops

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double deposit, rate;
    cout << "Enter initial deposit amount: ";
    cin >> deposit;
    cout << "Enter monthly interest rate (in %): ";
    cin >> rate;

    double months = log(3.0) / log(1 + rate / 100.0);

    cout << fixed << setprecision(2);
    cout << "Deposit will triple after approximately " << months << " months." << endl;

    return 0;
}
