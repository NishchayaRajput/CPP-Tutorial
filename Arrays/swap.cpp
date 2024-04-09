#include<iostream>
using namespace std;
int main()
{
    int a = 45;
    int b = 79;
    int c = a;
    a=b;
    b=c;
    c=b;
    cout<<a<<endl<<b<<endl;
    return 0;
}