#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin>>t;

    while(t--)
    {
        int n,m; cin>>n>>m;

        string s,l;
        cin>>s>>l;

        int cr=0,cl=0;
    
        int c=0;

        for(int i=0; i<n; i++)
        {
            
            for(int j=0; j<m; j++)
            {
                if(l[j]==s[i])
                {
                    c++;
                }
            }

            if(c==0)
        }

        cr=s.size()-cl;

        cout<<max(cl,cr)<<"\n";

    }
    

   

    return 0;
}