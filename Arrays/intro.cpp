#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    
    for(int i=0;i<10;i++){
        int number;
        cout<<"Enter Number for index- "<<i<<endl;
        cin>>number;
        arr[i]=number;
    }

    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}