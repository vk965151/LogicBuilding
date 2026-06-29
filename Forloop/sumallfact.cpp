#include<iostream>
using namespace std;
int main(){
    int nums;
    cout<<"Enter a number :";
    cin>>nums;
    int sum = 0;
    for(int i=1; i<=nums; i++){
        if(nums%i == 0){
            cout<<" The factor of the "<<nums<<" is "<<i<<endl;
            sum = sum+i;
        }
    }
    cout<<"Sum of the all factors are :"<<sum;
    return 0;
}