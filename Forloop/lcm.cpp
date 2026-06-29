#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    // Dono mein se jo bada number hai, wahan se check karna shuru karenge
    int maxNumber = (num1 > num2) ? num1 : num2;
    
    while (true) {
        // Agar maxNumber dono se poora divide ho jaye
        if (maxNumber % num1 == 0 && maxNumber % num2 == 0) {
            cout << "LCM is: " << maxNumber << endl;
            break; // LCM milte hi loop se bahar nikal jao
        }
        maxNumber++; // Agla number check karne ke liye 1 badhao
    }
    
    return 0;
}