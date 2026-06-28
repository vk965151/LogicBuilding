#include<iostream>
using namespace std;
int main(){

    for(int j=0; j<=100; j++){

        bool isprime = true;
    for(int i=2; i<=j/2; i++){
        if(j%i==0){
            isprime = false;
            break;
        }
    }
    if(isprime){
        cout<<"Number is prime "<<j<<endl;
    }
    }
    

}