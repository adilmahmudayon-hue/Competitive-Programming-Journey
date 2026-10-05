#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s;

        cin>>s;

        

        if(s[0]=='1')
        {
            int c=0;
            int i=0;
            while(i<s.size())
            {
                if(s[i]=='0')
                c++;
                i++;
            }

             cout<<c<<"\n";
             continue;
        }

        else
        {
            

          
        }

       
    }


    return 0;
}