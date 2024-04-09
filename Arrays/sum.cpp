// Output sum of elements of an array
#include<iostream>
using namespace std;
int main()
{

   
   
    int arr[9]={9,8,7,6,5,4,3,2,1};
    int sum=0;
    for(int i=0;i<9;i++){
        sum+=arr[i];
    }
    cout<<sum<<endl;

}    
   