#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;
    int min = 9;
    int i = 0;
    int digit;
    while(num>0){
        digit = num%10;
        if (digit<min)
        {
            min = digit;
        }
        num = num/10;
        i++;
    }
    cout<<"minimum Digit "<<min;

}