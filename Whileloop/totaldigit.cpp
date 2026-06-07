#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int nums;
    cout << "Enter a number: ";
    cin >> nums;

    int tdigit = 0;
    int lst = 0;
    while(nums != 0){
        nums = nums/10;
        tdigit++;
    }
    cout<<"Total digit :"<<tdigit;
    return 0;
}
