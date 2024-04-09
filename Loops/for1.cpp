#include <iostream>
using namespace std;
int main()
{
    // what is a loop:
    // executing a block of code repeatedly
    // under a condition
    // 3 stages in a loop:
    // 1. Initialization 2. Condition 3. increment/decrement
    // for ( initialization; condition; increment/decrement)
    // {
    /* code */
    // }
    int n;
    cin>>n;
    for (int i = n; i >=1; i--)
    {
        cout<<i<<endl;
    }

    return 0;
}