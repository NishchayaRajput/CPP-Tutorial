// Create a program that takes input from user of a number and gives us output if it's number is even or odd
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the integer: ";
    cin>>n;
    if((n&1)==0)
    { 
    cout<<"Number is even";
    }
    else{
        cout<<"Number is odd";
    }
}