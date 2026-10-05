#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n; cin>>n;
    long long t=0;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        
        cin>>arr[i];
        if(i>0)
        {
            if(arr[i]!=arr[i-1] )t++;
        }

        else t++;

        cout<<"\n";
    }

    cout<<t;

    return 0;
}