#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 10;
    // define a string with limit of 10;
    string name = "Nish";
    // Append function
    name.append("chay");
    // Assign
    name.assign("Tushar");
    // at
    cout<<name.at(1)<<endl;
    // find
    cout<<name.find("T")<<endl;
    // insert
    name.insert(3,"AR");
    cout<<name<<endl;
    // erase
    name.erase(3,3);
    cout<<name<<endl;
    cout<<"Before erase"<<endl;
    // clear
    name.clear();
    // empty
    cout<<name.empty()<<endl;
    cout<<name<<endl;
} 