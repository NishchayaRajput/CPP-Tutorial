
#include <bits/stdc++.h>
using namespace std;
 
string removeChars(string string1, string string2) {
         for(auto i:string2)
        {
           while(find(string1.begin(),string1.end(),i)!=string1.end())
            {
                auto itr = find(string1.begin(),string1.end(),i);
                string1.erase(itr);
            }
        }
        return string1;
    }

int main()
{
        string string1,string2;
        string1="coder";
        string2="oder";
         cout<<  removeChars(string1,string2)<<endl;;
       return 0;
}       