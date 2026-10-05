#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;

        long long r;
        if(a>=b) r=a-b;
        else r=b-a;


        if(a>=b)
        {
            a+=c;
        }
        else
        {
            if(a+c-b>=r) a+=c;
        }







        

        if(a>=b) r=a-b;
        else r=b-a;

        cout<<r<<"\n";
    }

    return 0;
}