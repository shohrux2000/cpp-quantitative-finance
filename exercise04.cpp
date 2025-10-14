#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double revenue, cost, taxRate;
    cout << "Enter the revenue: ";
    cin >> revenue;
    cout << "Enter the costs: ";
    cin >> cost;
    cout << "Enter the tax rate (%): ";
    cin >> taxRate;

    double grossProfit = revenue - cost;
    double tax = 0.0;
    if (grossProfit > 0)
        tax = grossProfit * (taxRate / 100.0);
    double netProfit = grossProfit - tax;

    cout << "Gross profit: " << grossProfit << endl;
    cout << "Net profit: " << netProfit << endl;
    return 0;
}
