// Find the highest proper factor of a given number.

#include<iostream>
using namespace std;
int main (){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    int i = 1;
    int fac = 1;

    while(i <= num/2){
        if (num % i == 0){
            fac = i;
        }
        i++;
    }

    if (num <= 1){
        cout<<"No proper factors for "<<num<<"."<<endl;
    } else {
        cout<<"Highest factor of "<<num<<" is "<<fac<<endl;
    }

    return 0;
}