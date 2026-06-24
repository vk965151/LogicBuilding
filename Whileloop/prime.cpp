#include<iostream>
using namespace std;
int main (){
    int num;
    cout<<"enter number do you want to check :";
    cin>>num;
    if(num<=1){
        cout<<"not a prime no. ";
        return 0;
    }


    bool prime = true;

    int i=2;
    while(i<num/2){
        if(num%i==0){
            prime = false;
            break;
        }
        i++;
    }

        if(prime){
            cout<<"prime no.";
        }
        else{
            cout<<"Not a prime No.";
        }
    return 0;
}