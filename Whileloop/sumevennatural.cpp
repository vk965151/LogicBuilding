// 1 to 10 using while loop

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter first N natural no : ";
    cin>>num;
    int sum = 0;
    int i=1;
    while(i<=num){
        if(i%2==0){
            sum+=i;
        }
        i++;
    }
    cout<<"The Sum of first N  even Natural no :"<<sum;


    return 0;
}

