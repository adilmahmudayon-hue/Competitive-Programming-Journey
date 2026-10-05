#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    for( int i=0; i<n; i++)
    cout<<i<<" ";

    cout<<"\n";

    int j=12345;
    while(j>0)
    {
        int r= j%10;
        cout<<r<<" ";
        j/=10;
    }

    cout<<"\n";

    int i=0;
    do
    {
        cout<<i <<"\n";
        

    }
    while(i--);
        /* code */
 
    
}