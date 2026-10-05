#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n; i++)
        cin>>arr[i];

        sort(arr,arr+n);

        long long s=0;
         for(int i=1;i<n; i++)
          s+=arr[i];

          cout<<s<<"\n";

    }

   

    return 0;
}