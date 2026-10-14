#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin>>t;
    while(t--)
    {
        int x,y,r;
        cin>>x>>y>>r;

        int i=x,j=y;

        while( ((i-x)*(i-x)) + ((j-y)*(j-y))< r*r)
        {
            i++;
            
        }

        cout<<i<<" "<<j<<"\n";

    }
    

   

    return 0;
}