#include <bits/stdc++.h>
using namespace std;

int main() {
 
    
int t; cin>>t;
while (t--)
{
    int n; cin>>n;
    int arr[n];
   

    for(int i=0; i<n; i++)
   {
    cin>>arr[i];
    

   } 

     sort(arr,arr+n);

    reverse(arr,arr+n);

    int gc=0 ,f=0;
    int pos=n-1;
    for(int i=0; i<n-1; i++)
   {
    

      if(arr[i]==arr[i+1])
     {
        
        gc++;

        

     }
     else 
     {
        f=gc;
        gc=0;
     }

    
    

   } 

    for( auto it:arr)
    cout<<it<<" ";

    cout<<"\n";
}

   

    return 0;
}