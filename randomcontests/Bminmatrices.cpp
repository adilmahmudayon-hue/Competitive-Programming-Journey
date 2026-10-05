#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        if(k<n)
        {
            cout<<"-1\n";
            return 0;
        }

        else
        {
           int  mat[n][n];
           
           if(k==n)
           {
              for(int k=1; k<=n*n; k++)
              {
                int a=1;
                for(int i=0; i<n; i++)
                {
                   for(int j=0; j<n;j++)
                   {
                        if(i==j)
                        {
                            mat[i][j]=a;
                           
                            k+=n;
                             a++;
                        }
                        else 
                        {  
                      
                             mat[i][j]=k++;
                            
                             
                        }
                      
                   }
                }
              }
           }
        

         for(int i=0; i<n; i++)
                {
                   for(int j=0; j<n;j++)
                   {
                    cout<<mat[i][j]<<" ";
                   }
                   cout<<"\n";
                }
        }
    }

}