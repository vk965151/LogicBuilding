// Product of all digits

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int nums;
    cout << "Enter a number: ";
    cin >> nums;

    int sum = 0;
    int lst = 0;
    while(nums != 0){
        lst = nums%10;
        sum = sum+lst;
        nums = nums/10;

    }
    cout<<"Product of all digit :"<<sum;
    return 0;
}
