#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k; cin>>n>>k;
    int arr[n];
    
    vector<pair<int ,int>>v ;// vector of pairs(days,index)
    for(int i=0; i<n; i++)
   {
     cin>>arr[i];
     v.push_back({arr[i],i+1});
   }

    sort(v.begin(),v.end());

    int c=0;

  
    vector<int>ind;
    
    for(int i=0; i<n; i++)
    {

        if(v[i].first>k) break;
        else
       {
        k-=v[i].first;
        ind.push_back(v[i].second);
        c++;
       
       } 
    }

    cout<<c<<"\n";
    for(int i=0;i<ind.size(); i++)
       {
         cout<<ind[i]<<" ";
       }
 
       cout<<"\n";
    


    return 0;
}