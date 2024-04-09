// Write a program to create an array of 10 integers and store multiplication table of 5 in it.
#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    for(int i=1;i<=10;i++){
        arr[i-1]=i*5;
    }

    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
}