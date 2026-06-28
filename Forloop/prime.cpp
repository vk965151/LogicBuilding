#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number for checking prime or not :";
    cin>>num;
    if(num<=1){
        cout<<"no is not prime";
        return 0;
    }
    bool isprime = true;
    for(int i=2; i<=num/2; i++){
        if(num%i==0){
            isprime = false;
            break;
        }
    }
    if(isprime){
        cout<<"Number is prime ";
    }
    else{
        cout<<"not prime number ";
    }

}