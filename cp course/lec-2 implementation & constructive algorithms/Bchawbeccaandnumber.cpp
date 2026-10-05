#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main()
{
     string str; cin>>str;
    long long x=0;
    
 
    for(int i=0; i<str.size();i++)
    {
        int c=str[i]-48;
        if(c<9-c || (c==9 && i==0))
        {
            str[i]=c+'0';

        }

        else
        {
            str[i]=9-c+'0';

        }
    
    }
    
  


    cout<<str;
}
