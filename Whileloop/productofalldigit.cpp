// Product of all digits

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int nums;
    cout << "Enter a number: ";
    cin >> nums;

    int product = 1;
    int lst = 0;
    while(nums != 0){
        lst = nums%10;
        product = product*lst;
        nums = nums/10;

    }
    cout<<"Product of all digit :"<<product;
    return 0;
}
