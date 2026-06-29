#include <iostream>
using namespace std;
int main()
{
    int nums;
    cout << "Enter a number : ";
    cin >> nums;
    int a = 0;
    int b = 1;
    int sum = 0;
    for (int i = 0; i <= nums; i++)
    {
        cout << " " << a;
        sum = sum + a;
        int c = a + b;
        a = b;
        b = c;
    }
    cout << " " << endl;
    cout << " Sum of the fibbnocii series :" << sum;

    return 0;
}