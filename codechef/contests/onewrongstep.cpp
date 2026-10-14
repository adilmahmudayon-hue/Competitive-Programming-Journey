#include <bits/stdc++.h>
using namespace std;

int main() {
    

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;

        int cu=0,cd=0,cr=0,cl=0;

        for(int i=0; i<n; i++)
        {
            if(s[i] =='U') cu++;
           else  if(s[i]=='D') cd++;
           else  if(s[i]=='L') cl++;
           else  if(s[i]=='R') cr++;
        }

        int cc=0;

        if((cu-cd==2 || cd-cu==2)) cc++;
         if((cl-cr==2 || cr-cl==2)) cc++;

         if(cc==1) cout<<"YES\n";
         else cout<<"NO\n";
    }
   

    return 0;
}