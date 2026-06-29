#include<iostream>
using namespace std;
int main(){
    int nums;
    cout<<"Enter a number :";
    cin>>nums;
    for(int i=1; i<=nums; i++){
        if(nums%i == 0){
            cout<<" The factor of the "<<nums<<" is "<<i<<endl;
        }
    }
    return 0;
}