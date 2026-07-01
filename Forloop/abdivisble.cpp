#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two positive integers :";
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        if(i%7==0){
            cout<<i<<" is divisible by 7"<<endl;
        }
    }
    return 0;
}