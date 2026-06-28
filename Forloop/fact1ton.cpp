#include<iostream>
using namespace std;
int main(){
    int range;
    cout<<"Enter range do you want to print fact:";
    cin>>range;
    for(int i=0; i<=range; i++){
        int fact = 1;
        for(int j=1; j<=i; j++){
            fact*=j;
        }
        cout<<"The fact of :"<<i<<" is "<<fact<<endl;
    }
    return 0;
}