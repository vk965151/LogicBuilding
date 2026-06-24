#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    int i = 1;
    int sum=0;
    while(i<num){
        if(num%i==0){
            cout<<"factor of "<<num<<" is "<<i<<endl;
            sum+=i;
        }
        i++;
    }
    cout<<"Sum of all factor is "<<sum;
    return 0;
}