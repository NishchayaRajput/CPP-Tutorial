// What are variables?

#include<iostream>
using namespace std;
int main(){
    // take input from user for two variables a and b and cout the sum, multiply, substraction, %
    int A,B,sum,multiply,substraction,modulus;
    cout<<"Enter the first integer";
    cin>>A;
    cout<<"Enter the secound integer";
    cin>>B;
    sum=A+B;
    cout<<A<<" + "<<B<<" = "<<sum<<endl;
    multiply=A*B;
    cout<<A<<" * "<<B<<" = "<<multiply<<endl;
    substraction=A-B;
    cout<<A<<" - "<<B<<" = "<<substraction<<endl;
    modulus=A%B;
    cout<<A<<" % "<<B<<" = "<<modulus<<endl;

    return 0;


}