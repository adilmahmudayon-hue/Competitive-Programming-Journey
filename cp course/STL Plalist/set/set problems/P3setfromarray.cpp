#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        set<int>s;
        int n; cin>>n;

        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            s.insert(arr[i]);
        }
        
         int x; cin>>x;

        for(auto it:s)
        cout<<it<<" ";
        cout<<"\n";

        
        
        if(s.count(x))
        {
            s.erase(x);
            cout<<"erased "<<x<<"\n";
        }
        else cout<<"not found\n";
        
        
    }
    
}