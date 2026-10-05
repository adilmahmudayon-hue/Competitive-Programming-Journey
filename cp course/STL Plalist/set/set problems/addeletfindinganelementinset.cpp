#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q; cin>>q;
    set<int>s;
    while(q--)
    {
        int y; long long int x;
        cin>>y>>x;

        if(y==1) s.insert(x);
        else if(y==2) s.erase(x);
        else
        {
          int c= s.count(x);
          if(c==0) cout<<"No\n";
          else cout<<"Yes\n";
        } 
    }
}