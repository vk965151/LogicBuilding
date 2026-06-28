#include<iostream>
using namespace std;
int main(){
    int nums;
    cout<<"Enter number do you want to print table :";
    cin>>nums;
    for(int i=0; i<=10; i++){
        cout<<"The table of :"<<nums<<" is :"<<i*nums<<endl;
    }
    return 0;
}