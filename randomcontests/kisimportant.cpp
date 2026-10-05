#include <bits/stdc++.h>
using namespace std;

int main() {
    
   int t; cin>>t;
   while(t--)
   {
      int n,k; cin>>n>>k;
       vector<long long int>arr;

       unordered_set<long long int>s;

       for(int i=0; i<n; i++)
      {
        int in;
        cin>>in;
        arr.push_back(in);
        s.insert(arr[i]);

      } 

      long long int sc=0;

      for(int i=0;  i<n &&  s.size()>=k; i++)
      {
        if(arr[k-1]>=arr[s.size()-k])
        {
             sc+=arr[k-1];
             s.erase(arr[k-1]);
             long long int t=arr[k-1];
             
             // cout<<s.size()<<" ";
        }

        else
         {
             sc+=arr[s.size()-k];
             s.erase(arr[s.size()-k]);
            //  cout<<s.size()<<" ";
             
        }
      }

      cout<<sc<<"\n";
        

   }
   

    return 0;
}