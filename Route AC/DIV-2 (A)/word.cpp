#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;
    int cc=0,cs=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]<97) cc++;
        else cs++;
    }

    if(cs>=cc)
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        
    }

    else
    {
         transform(s.begin(),s.end(),s.begin(),::toupper);
        
    }

    cout<<s;


    return 0;
}