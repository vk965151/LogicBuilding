//fibnoci series up to N terms
#include<iostream>
using namespace std;
int main (){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    int i = 0;
    int a = 0, b = 1;
    int sum = 0;
    while (i < num) {
        cout << a;
        if (i < num - 1) cout << " ";
        sum = sum+a;

        int next = a + b;
        a = b;
        b = next;
        i++;
    }
    cout<<" sum "<<sum;
    cout << endl;
    return 0;
}
