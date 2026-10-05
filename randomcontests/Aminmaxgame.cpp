#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n];
        int c1=0,c0=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==1) c1++;
            else c0++;
        }

        if(c1>=c0) cout<<"Bessie\n";
        else cout<<"Elsie\n";
    }
}