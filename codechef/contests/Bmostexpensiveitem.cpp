#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        
        int arr[n];
        for(int i=0; i<n; i++)
        cin>>arr[i];

        sort(arr,arr+n);

        int i=n;
        int s=0;

        for(int i=n-1; k--; i--)
        {
            s+=arr[i];
        }

        cout<<s<<"\n";
    }

   

    return 0;
}