#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];


    int cs=0,cd=0;


    int f=1;

    for( int i=0,j=n-1; i<=j; )
    {

        if(f==1) 
        {
            if(arr[i]>=arr[j])
           {
            cs+=arr[i];
            i++;
           } 
            else
            {
                cs+=arr[j];
                j--;
            } 

            f=0;
            
        }

        else 
        {
             if(arr[i]>=arr[j])
            {
                cd+=arr[i];
                i++;

            }
            else 
            {
                cd+=arr[j];
                j--;
            }
            f=1;
        }
    }

   

   
   
    cout<<cs<<" "<<cd;
    cout<<"\n";

    return 0;
}