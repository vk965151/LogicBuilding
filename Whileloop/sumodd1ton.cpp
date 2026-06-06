//Sum of All odd NUmbers from 1 to N

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of N : ";
    cin>>n;
    int i = 1;
    int sum = 0;
    while(i<=n){
        if(i%2!=0){
            sum+=i;
        }
        i++;
    }
    cout<<"Sum of All odd 1 to N : "<<sum;
return 0;
}