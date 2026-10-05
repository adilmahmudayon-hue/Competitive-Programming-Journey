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
    int c=0;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        if(arr[i]!=i) c++;


    }
    if(n==1)
    {
        printf("Yes\n");
       continue;

    } 

    if(c==2) cout<<"Yes\n";
    else cout<<"No\n";
    }
   
}