#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        char ch; cin>>ch;

        string s; cin>>s;

        int c=0;

        for(int i=0; i<n/2; i++)
        {
           if(s[i]!=s[n-1-i])
           {
              if(s[i]!=ch) c++;
              if(s[n-1-i]!=ch) c++;
           }
            
        }

        cout<<c<<"\n";

    }

   

    return 0;
}