#include<iostream>
using namespace std;
int main (){
    int num;
    cout<<"Enter number :";
    cin>>num;

    int temp;
    temp = num;
    int sum_d = 0;
    int i = 1;

    while(i < num){
        if (num%i == 0){
            cout<<"divisor of : "<<num<<" is : "<<i<<endl;
            sum_d+=i;
        }
        i++;
    }
    if(temp == sum_d){
        cout<<"Entered Number is perfact number :"<<temp;
    }
    
    else{
         cout<<"Entered Number is Not perfact number :"<<temp;
    }



    return 0;
}