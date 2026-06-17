// Find and print the sum of all factors of the given number.
#include<iostream>
using namespace std;
int main (){
    int num;
    cout<<"Enter number :";
    cin>>num;
    int i = 1;
    int sum = 0;
    while(i <= num){
        if (num%i == 0){
            cout<<"divisor of : "<<num<<" is : "<<i<<endl;
            sum+=i;
        }
        i++;
    }
    cout<<"sum of all factor is : "<<sum;
    

    return 0;
}