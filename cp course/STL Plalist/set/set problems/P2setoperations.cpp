#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
         
        int q; cin>>q;
        set<int>s;
        while(q--)
        {
           

            char ch; cin>>ch;
            long long int x; cin>>x;

            if(ch=='a') s.insert(x);
            else if(ch=='b')
            {
                for(auto it:s)
                cout<<it<<" ";
                cout<<"\n";
            }
            else if(ch=='c') s.erase(x);

            else if(ch=='d')
            {
                int c=s.count(x);
                if(c==1) cout<<"1\n";
                else cout<<"-1\n";
            }

            else cout<<s.size()<<"\n";

        }
    }

}