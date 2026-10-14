#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;

        vector<int> top;

        int arr[n];
        for(int i=0; i<n; i++)
        arr[i]=i+1;
       


        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                top.push_back(arr[i]);
            }
            

            else if(s[i]=='2')
            {
                if(top.size()==0)
                {
                   continue;
                }
            
               else
               {
                

                 top.pop_back(); 
                 
                 top.push_back(arr[i]);
               } 
               
            }

           else if(s[i]=='3')
           {
              continue;
             
           } 
        }

        cout<<top.size()<<"\n";

        for( int i=0; i<top.size(); i++)
        {
            cout<<top[i]<<" ";
        }

        cout<<"\n";

    }
    

    
   

    return 0;
}