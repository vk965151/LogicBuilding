// Print all factors of the given number.
#include<iostream>
using namespace std;
int main (){
    int num;
    cout<<"Enter number :";
    cin>>num;
    int i = 1;

    while(i <= num){
        if (num%i == 0){
            cout<<"divisor of : "<<num<<" is : "<<i<<endl;
        }
        i++;
    }
    

    return 0;
}