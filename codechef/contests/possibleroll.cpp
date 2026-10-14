#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int x,k,y; cin>>x>>k>>y;

    int f=0;
    for(int i=k; i<=k*x; i+=k)
    {
        if(i==y)
        {
            f=1;
            break;
        }

    }


    if(f==0) cout<<"NO\n";
    else cout<<"YES\n";

   

    return 0;
}
