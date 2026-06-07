#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number to calculate factorial : ";
    cin>>num;
    int fact = 1;
    int i = 1;
    while(i<=num){
        fact = fact*i;
        i++;

    }
    cout<<"The factorial of :"<<num<<" is :"<<fact;

    return 0;
}