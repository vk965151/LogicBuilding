#include <iostream>
using namespace std;
int main()
{
    int num = 2;

    while (num <= 100)
    {
        int i = 2;
        bool Prime = true;

        while (i < num)
        {
            if (num % i == 0)
            {
                Prime = false;
                break;
            }
            i++;
        }
        if (Prime)
        {
            cout << num << " ";
        }
        num++;
    }
    return 0;
}