#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int k,r;
    cin>>k>>r;

    int a=1,c=1;
    int t=k;

    for(int i=1; i<10 && (t%10!=0); i++)

    {
        a++;
        t+=k;

    }

 

   t=k;

 for(int i=1; i<10 && (t%10!=r); i++)

    {
        c++;
        t+=k;

    }
       
       

    cout<<min(a,c)<<"\n";

   

    return 0;
}