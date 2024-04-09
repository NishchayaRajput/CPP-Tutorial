#include<iostream>
using namespace std;
int main()
{
    int arr[7]={12,23,345,45,23,45,656};
    int length = 7;

    for(int i=0;i<length/2;i++){
        int temp = arr[i];
        arr[i] = arr[length-1-i];
        arr[length-1-i] = temp;
    }

    // int arr2[7];
    // for(int i=0;i<7;i++){
    //     arr2[6-i]=arr[i];
    // }
    cout<<"The Reverse Array is :"<<'\n';

    for(int i=0;i<7;i++){
        cout<<arr[i]<<",";
    }
}