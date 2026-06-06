// Sum of all even  1 to n numbers

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Value of N : ";
    cin>>n;
    int i=1;
    int sum = 0;
    while(i<=n){
        if(i%2==0){
            sum+=i;
        }
        i++;
    }
    cout<<"Sum of All Even 1 to N : "<<sum;

    return 0;
}

