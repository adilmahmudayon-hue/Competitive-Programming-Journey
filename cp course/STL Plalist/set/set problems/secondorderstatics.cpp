#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
   
        
    
    set<int> s;

    while(n--)
    {
        int x; cin>>x;
        s.insert(x);

    }

    if(s.size()<2)

    {
         cout<<"NO\n";
        return 0;

    }
     
    cout<<*++s.begin();
    

   

    return 0;
}