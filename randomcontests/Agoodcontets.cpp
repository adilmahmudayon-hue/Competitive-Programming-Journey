#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;

        int a1,a2,a3;
        cin>>a1>>a2>>a3;

        int m=(n-a1); 
        if((n-a2)>m) m=(n-a2);
        if((n-a3)>m) m=(n-a3);
      

        cout<<m<<"\n";
       
    }

    return 0;
}