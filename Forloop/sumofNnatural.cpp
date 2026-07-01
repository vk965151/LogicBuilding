#include<iostream>
using namespace std;
int main(){
    int nums;
    cout << "Enter a positive integer: ";
    cin >> nums;
    int sum = 0;
    for (int i = 1; i <= nums; i++) {
        sum += i;
    }
    cout << "Sum of first " << nums << " natural numbers is: " << sum << endl;
    return 0;
}