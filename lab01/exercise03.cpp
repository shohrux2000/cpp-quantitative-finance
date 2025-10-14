#include <iostream>
using namespace std;

int main() {
    cout << "Type\t\tBytes" << endl;
    cout << "char\t\t" << sizeof(char) << endl;
    cout << "short\t\t" << sizeof(short) << endl;
    cout << "int\t\t" << sizeof(int) << endl;
    cout << "long\t\t" << sizeof(long) << endl;
    cout << "long long\t" << sizeof(long long) << endl;
    cout << "float\t\t" << sizeof(float) << endl;
    cout << "double\t\t" << sizeof(double) << endl;
    cout << "long double\t" << sizeof(long double) << endl;
    cout << "bool\t\t" << sizeof(bool) << endl;
    cout << "unsigned int\t" << sizeof(unsigned int) << endl;
    cout << "unsigned long\t" << sizeof(unsigned long) << endl;
    return 0;
}
