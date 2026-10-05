#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int > a(n);

        int p[n];
        for(int i=0; i<n; i++)
        cin>>a[i];

        for(int i=0; i<n; i++)
        cin>>p[i];

        int f[n];

    
        for(int i=0; i<n; i++)
        {
            if(i>0)
            {
                
            }
            f[i]=0;
            if(a[i]<a[i+1]) f[i]++;
            else
            {
                a[i]+=a[i+1];
            }
        }


        for(int i=0; i<n; i++)
        cout<<f[i]<<" ";
        cout<<"\n";
     
    }
}