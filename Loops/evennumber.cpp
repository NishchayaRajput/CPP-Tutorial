#include<iostream>
using namespace std;
void odd1(){
    for(int i=1; i<=100;i++)
    {
        if(i%2==0){
            continue;
        }
        else{
            cout<<i<<endl;
        }
    }
}
void odd2(){
    for(int i=1;i<=100;i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
        else{
            continue;
        }
    }
}
void showevenorodd(){
    for(int i=1;i<=100;i++){
        if(i%2==0){
            cout<<i<<" : The number is Even"<<endl;
        }
        else{
            cout<<i<<" : The number is Odd"<<endl;
        }
    }
}
int main(){
    // continue statement: when you want to skip something in your loop
    // break statement: when you want to get out from your loop
    // odd1();
    // odd2();
    showevenorodd();
}