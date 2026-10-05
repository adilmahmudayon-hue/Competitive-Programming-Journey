#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a;
    cin>>b;

    int c=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==b[i]) continue;
        else
        {
            if(a[i]>b[i])
            {
                if(a[i]-b[i]==32) continue;
                else 
                c++;
            } 
            else
            {
                   if(b[i]-a[i]==32) continue;
                else 
                c--; 
            } 
        }

    }

    if(c>0) cout<<"1\n";
    else if(c<0) cout<<"-1\n";
    else cout<<"0\n";

   
    
 
}