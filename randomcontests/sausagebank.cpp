#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;

        int m=0;


         m+=pow(2,n-k+1);
         n--;
         k--;

         while(n>0 && k>0) 
         {
            m+=2;
            n--;
            k--;
         }
       

       cout<<m<<"\n";

    }

   

    return 0;
}