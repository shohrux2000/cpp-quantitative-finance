// Author: Shokhrukhbek Valijonov
// Student ID: 475154
// Exercise 4: Dice Simulation and Average Result

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main() {
    int throws;
    cout << "How many times do you want to throw the dice? ";
    cin >> throws;

    srand(time(0));
    int sum = 0;

    for (int i = 0; i < throws; i++) {
        int roll = rand() % 6 + 1;
        sum += roll;
    }

    double average = static_cast<double>(sum) / throws;
    cout << fixed << setprecision(2);
    cout << "Average dice result: " << average << endl;

    return 0;
}
