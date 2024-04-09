#include<bits/stdc++.h>
using namespace std;

bool palindrome(string st,int startIndex, int lastIndex){
    if(startIndex>=lastIndex){
        return true;
    }
    if(st[startIndex]!=st[lastIndex]){
        return false;
    }
    return palindrome(st,startIndex+1,lastIndex-1);
}

int main(){
    string t = "racecar";
    // aceca
    // cec
    // e
    // string t2;
    // for (int i = t.length(); i >= 0; i--)
    // {
    //     t2.push_back(t[i]);
    // }
    // if(t.compare(t2)){
    //     cout<<"Palindrome"<<endl;
    // }
    // else{
    //     cout<<"not palindrome"<<endl;
    // }
    if(palindrome(t,0,6)){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not palindrome"<<endl;
    }
}