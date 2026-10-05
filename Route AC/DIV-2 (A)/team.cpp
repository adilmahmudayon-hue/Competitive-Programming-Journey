#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;

    int t=0;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a==1 && b==1) ||(a==1 && c==1) || (b==1 && c==1))
        t++;

    }

    cout<<t<<"\n";
}