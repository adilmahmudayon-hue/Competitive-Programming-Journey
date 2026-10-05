#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin>>t;
    while(t--)
    {
        long long s=0;
        long long b; cin>>b;

        int i=1;
        while(b>0)
        {
            b-=i;
            if(b>=0)
            {
                s++;
                i++;
            }
        } 

        cout<<s<<"\n";
    }

   

    return 0;
}