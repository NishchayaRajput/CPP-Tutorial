#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {121,232,12,2323,323};
    for(int i=0;i<5;i++){
        arr[i]=arr[i]*5;
    }

    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}