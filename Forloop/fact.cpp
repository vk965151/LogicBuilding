#include<iostream>
using namespace std;
int main(){
    int nums;
    cout<<"Enter number do you want to print Factorial :";
    cin>>nums;
    int fact = 1;
    for(int i=1; i<=nums; i++){
        fact*=i;
    }
    cout<<"The factorial of : "<<nums<<" is "<<fact;

    return 0;
}