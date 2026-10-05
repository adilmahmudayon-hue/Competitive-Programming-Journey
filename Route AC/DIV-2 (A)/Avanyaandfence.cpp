#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;
    cin>>n>>h;
    int arr[n];

    int c=0;
    for(int i=0; i<n; i++)
   {
    cin>>arr[i];
    if(arr[i]>h) c+=2;
    else c++;
   } 

   cout<<c<<"\n";
}