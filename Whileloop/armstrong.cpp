#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    int original = num;
    int digits = 0;
    int result = 0;

    // Count digits
    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;

    // Armstrong calculation
    while (temp != 0) {
        int rem = temp % 10;
        result += round(pow(rem, digits));
        temp /= 10;
    }

    if (result == original)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}