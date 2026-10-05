#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int a=1;
        int x=0;
        int c=0;
        vector<int>v;

        while(n>0)
        {  
             
          if(n>=10000)
          {
            v.push_back((n/10000)*10000);
            n=n%10000;
            c++;
          }
         
              
          else if(n>=1000)
          {
            v.push_back((n/1000)*1000);
            n=n%1000;
            c++;
          }

                else if(n>=100)
          {
            v.push_back((n/100)*100);
            n=n%100;
            c++;
          }

                else if(n>=10)
          {
            v.push_back((n/10)*10);
            n=n%10;
            c++;
          }

                else if(n>=1)
          {
            v.push_back(n);
            n=n%1;
            c++;
          }




        }

        cout<<c<<"\n";
        for( auto &it:v)
        cout<<it<<" ";

        cout<<"\n";


    }
}