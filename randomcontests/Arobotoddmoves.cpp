#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin>>t;
    while(t--)
    {
         int a,b; cin>>a>>b;
    
    if(a<0) a*=-1;
    if(b<0) b*=-1;
    int o=0;
    if(a>b && a-b>1) {
        cout<<"-1\n";
        continue;
    }
    else  if(b-a>1)
    {
        cout<<"-1\n";
        continue;
    } 

     

     if (a>b) 
     {
        o+=(a+1);
     }
     else o+=b;

   cout<<o<<"\n";

    }
    
   
    return 0;
}