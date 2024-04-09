#include <iostream>
using namespace std;
int main()
{
    int c, s, loss,profit;
    cout << "Enter the cost price :";
    cin >> c;
    cout << "Enter the selling price :";
    cin >> s;
    int dif = s-c;
    if(dif>0){
        cout<<"You are in profit"<<endl<<"Profit: "<<dif<<endl;
    }
    else{
        cout<<"You are in loss"<<endl<<"Loss: "<<dif<<endl;
    }
    


  
}