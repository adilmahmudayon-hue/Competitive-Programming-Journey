#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n; cin>> n;
    int arr[n];
    for( int i=0; i<n; i++)
    cin>>arr[i];

    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";

    int s=0;
    for(int i=0; i<n; i++)
    s+=arr[i];

   cout<<"\nSum of the array: "<<s;

   // sorting an array(ascending)

   cout<<"\n";
   // rebersing array


   reverse(arr,arr+n);
   for( auto &it:arr)
    {
        cout<<it<<" ";
    }

cout<<"\n";

    sort(arr,arr+n);
     for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";

    int l=sizeof(arr)/sizeof(arr[1]);
    cout<<"\n"<<l<<"\n";

 

    // descending sort
    reverse(arr,arr+n);
    for(auto &it:arr)
    cout<<it<<" ";

    return 0;
    
}