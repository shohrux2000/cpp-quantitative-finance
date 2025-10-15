// Author: Shokhrukhbek Valijonov
// Student ID: 475154
// Exercise 1: Future Value of a Deposit

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double principal, rate;
    int years;

    cout << "Enter initial deposit amount: ";
    cin >> principal;
    cout << "Enter annual interest rate (in %): ";
    cin >> rate;
    cout << "Enter number of years: ";
    cin >> years;

    double futureValue = principal * pow(1 + rate / 100.0, years);

    cout << fixed << setprecision(2);
    cout << "Future value after " << years << " years: " << futureValue << endl;

    return 0;
}
