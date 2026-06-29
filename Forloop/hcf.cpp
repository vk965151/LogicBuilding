#include<iostream>
using namespace std;
int main(){
    int nums;
    cout<<"Enter a number :";
    cin>>nums;
    for(int i=nums/2 ; i>=2; i--){
        if(nums%i == 0){
            cout<<" The highest factor "<<nums<<" is "<<i<<endl;
            break;
        }
    }
    return 0;
}