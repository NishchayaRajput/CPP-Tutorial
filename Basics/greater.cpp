// Program to find maximum, minimum among three numbers
#include<iostream>
using namespace std;
int main()
{
    int A,B,C;
    cout<<"Enter the first integer";
    cin>>A;
    cout<<"Enter the secound integer";
    cin>>B; 
    cout<<"Enter the third integer";
    cin>>C;
    if(A>B)
    {
        if(A>C){
            cout<<"A is greater"<<endl;
        }
        else{
            cout<<"C is greater"<<endl;
        }
    }
    else if(B>A){
        if(B>C){
            cout<<"B is greater"<<endl;
        }
        else{
            cout<<"C is greater"<<endl;
        }
    }
    

}