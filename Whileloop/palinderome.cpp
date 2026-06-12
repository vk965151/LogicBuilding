#include<iostream>
using namespace std;
int main (){
    int num;
    cout<<"Enter numbers do you want to check :";
    cin>>num;
    int p_num = num;
    int rev = 0;
    int lst = 0;
    while(num != 0){
        lst = num%10;
        rev = rev*10+lst;
        num = num/10;
    }
    if (rev == p_num){
        cout<<"Number is palindrome ";
    }
    else{
        cout<<"Number is not palindrome ";
    }
return 0;
}
