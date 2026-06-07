// revrse no.

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int nums;
    cout << "Enter a number: ";
    cin >> nums;
    int lst = 0;
    int rev=0;
    while(nums != 0){
        lst = nums%10;
        rev = rev*10+lst;
        nums = nums/10;

    }
    cout<<"Product of all digit :"<<rev;
    return 0;
}
