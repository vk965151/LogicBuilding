// Print all numbers between a and b that are divisible by 7.

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter A and B ";
    cin>>a>>b;
    int count = a;
    while(count <= b){
        if(count % 7 == 0){
            cout<<"divisible by 7 : "<<count<<endl;
        }
        count++;
    }

    return 0;
}