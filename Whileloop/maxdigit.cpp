#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;
    int max = 0;
    int i = 0;
    int digit;
    while(num>0){
        digit = num%10;
        if (digit>max)
        {
            max = digit;
        }
        num = num/10;
        i++;
    }
    cout<<"maximum Digit "<<max;

}