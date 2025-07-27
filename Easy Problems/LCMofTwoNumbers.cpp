
// Program to find LCM of two numbers
// Given two positive integers a and b. Find the Least Common Multiple (LCM) of a and b.
// LCM of two numbers is the smallest number which can be divided by both numbers.


#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int maxVal = max(a, b); // Start from the greater number

    while (true) {
        if (maxVal % a == 0 && maxVal % b == 0) {
            cout << "LCM of " << a << " and " << b << " is: " << maxVal << endl;
            break;
        }
        maxVal++;
    }

    return 0;
}
