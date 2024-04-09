#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the digit ";
    cin>>n;
    for(int i=1;i<=5;i++){
        sum+=n%10;
        n = n/10;

    }


    cout<<sum<<endl;
}