// Insert an element on a specified index in an array
#include<iostream>
using namespace std;
int main()
{
    int arr[6]={15,20,30,45,50,0};
    int length=6;
    for(int i=(length-1);i>2;i--){
        arr[i] = arr[i-1];
    }
    arr[2] = 70;
    for(int i=0;i<length;i++){
        cout<<arr[i]<<endl;
    }
}