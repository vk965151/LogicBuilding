//fibnoci series up to N terms
#include<iostream>
using namespace std;
int main (){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    int i = 0;
    int a = 0, b = 1;

    while (i < num) {
        cout << a;
        if (i < num - 1) cout << " ";
        int next = a + b;
        a = b;
        b = next;
        i++;
    }

    cout << endl;
    return 0;
}
