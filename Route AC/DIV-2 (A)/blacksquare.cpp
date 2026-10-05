#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=4;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];

    long long t=0;
    string s;
    cin>>s;
     for(int i=0; i<s.size(); i++)
     {
        if(s[i]=='1') t+=arr[0];

        else if(s[i]=='2') t+=arr[1];
        else if(s[i]=='3') t+=arr[2];
        else if(s[i]=='4') t+=arr[3];
        

        


     }

     cout<<t<<"\n";

}