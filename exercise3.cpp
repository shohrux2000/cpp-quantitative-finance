// Author: Shokhrukhbek Valijonov
// Student ID: 475154
// Exercise 3: Tripled Deposit using Loops

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double deposit, rate, amount;
    cout << "Enter initial deposit amount: ";
    cin >> deposit;
    cout << "Enter monthly interest rate (in %): ";
    cin >> rate;

    amount = deposit;
    int months = 0;

    while (amount < 3 * deposit) {
        amount += amount * (rate / 100.0);
        months++;
    }

    cout << fixed << setprecision(2);
    cout << "Deposit will triple after " << months << " months." << endl;

    return 0;
}
