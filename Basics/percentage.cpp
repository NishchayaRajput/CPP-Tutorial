#include<iostream>
using namespace std;
int main()
{
    int sal,dearnessallowance;
    cout<<"Input the salary";
    cin>>sal;
    dearnessallowance=(sal*40)/100;
    cout<<dearnessallowance<<endl;
    int home_rent_all = (sal*20)/100;
    cout<<home_rent_all<<endl;
    cout<<"Your Gross Salary: "<<sal+dearnessallowance+home_rent_all<<endl;

    return 0;

}