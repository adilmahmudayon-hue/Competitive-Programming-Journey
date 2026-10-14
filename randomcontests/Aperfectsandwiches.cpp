#include <bits/stdc++.h>
using namespace std;

int gcd( int a, int b)
{
    int min;
    if(a<b) min=a;
    else min=b;

    int f;
    for( int i=min; i>0; i-- )
    {
       if( a%i==0 && b%i==0)
       {
           f=i;
          break;
       }
    }

    return f;
}

int main() {
    
    int t; cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int r;
        if(a<b)
        {
            cout<<"-1\n";
            continue;
        }
        
        else
        {
            r=gcd(a,b);
            
        }

        cout<<r<<"\n";
    }

   

    return 0;
}