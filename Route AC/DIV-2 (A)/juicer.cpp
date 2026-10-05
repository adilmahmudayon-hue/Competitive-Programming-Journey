#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n,b,d;
    cin>>n>>b>>d;

    int arr[n];
    long long s=0;
    int c=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

        if(arr[i]<=b)
        { 
            s+=arr[i];
            if(s>d)
            {
            
                c++;
                s=0;
            }

        }

    }

    cout<<c<<"\n";


   

    return 0;
}