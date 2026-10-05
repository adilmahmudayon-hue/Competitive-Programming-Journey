#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;

   int diff;
   char ch='a';

   int c=0;
   for(int i=0;i<s.size(); i++)
   {
    diff=s[i]-ch;

    if(ch>s[i]) diff=ch-s[i];

    c+=min(diff,26-diff);
    
    ch=s[i];

   }

   cout<<c<<"\n";

   return 0;
}