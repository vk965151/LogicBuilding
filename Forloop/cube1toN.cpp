#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a postive number :";
    cin>>num;
    for(int i =1; i<=num; i++){
        cout<<i<<" cube is :"<<i*i*i<<endl;
    }
    return 0;

}
