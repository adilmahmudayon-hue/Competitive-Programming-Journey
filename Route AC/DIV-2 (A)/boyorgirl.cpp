#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;
    
    int d=0;
    int c;

    for(int i=0; i<s.size(); i++)
    { 
        c=0;
        for(int j=i+1; j<s.size(); j++)
        {
            if(s[i]==s[j]) c++; 
        }

        if(c==0) d++;
    }

    if(d%2==0) cout<<"CHAT WITH HER!\n";
    else cout<<"IGNORE HIM!\n";
 
}