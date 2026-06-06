// 1 to 10 using while loop

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number do you want to print table :";
    cin>>num;
    int i=1;
    int cross;
    while(i<=10){
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
        i++;
    }


    return 0;
}

