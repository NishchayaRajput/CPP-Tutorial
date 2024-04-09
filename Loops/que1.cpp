// Program to find sum of natural numbers till n.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a integer number: ";
    cin>>n;
    int result = 0;
    for(int i=1; i<=n;i++){
        // result = result+i
        result += i;
    }
    cout<<result<<endl;
    return 0;
}