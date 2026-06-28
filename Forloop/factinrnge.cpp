#include<iostream>
using namespace std;
int main(){
    int start,end;
    cout<<"Enter Starting And Ending Point of the Factorial :";
    cin>>start>>end;
    int fact = 1;
    if(start>=0 && end>=0){
        for(int i=start; i<=end; i++) {
            fact*=i;
        }
        cout<<"The factorial of the between "<<start<<" and "<<end<<" is "<<fact;

    }
    return 0;
}