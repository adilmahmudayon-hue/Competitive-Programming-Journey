#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int cc=0,cp=0;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]==-1)
        {
            if(cp>0) cp--;
            else cc++;

        }

        else cp+=arr[i];
    }




    


    cout<<cc<<"\n";
}