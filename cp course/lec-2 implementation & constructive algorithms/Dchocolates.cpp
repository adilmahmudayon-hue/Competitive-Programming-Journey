#include<iostream>
#include<bits./stdc++.h>
using namespace std;
int main()
{

    int n; cin>>n;
    long long arr[n];
    for( int i=0; i<n;i++)
    cin>>arr[i];

    long long c=arr[n-1];

  long long max=arr[n-1]-1;
   
    for( int i=n-1; i>0;i--)
    {
         if(max==0) break;
        if(max>=arr[i-1])
        {
             c+=arr[i-1];
             max=arr[i-1]-1;
        }
        else 
        {
            c+=max;
             max-=1;
        }

       

       
        
        
        

    }


    cout<<c<<"\n";



    return 0;
}