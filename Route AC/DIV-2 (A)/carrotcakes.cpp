#include <bits/stdc++.h>
using namespace std;

int main() {
    
   int n,t,k,d;
   cin>>n>>t>>k>>d;

   int n1=n;
   int ft=0;

   while(n1>0)
   {
      n1-=k;
      ft+=t;

   }

  

   

  
    n1=n;
    int t1=0;

    while(t1<d)
    {
        n1-=k;
        t1+=t;
    }

   int st=d;

   while( n1>0)
   {
       st+=t;
       n1-=k*2;
   }

   if(ft<=st) cout<<"NO\n";

  else  cout<<"YES\n";

   

    return 0;
}