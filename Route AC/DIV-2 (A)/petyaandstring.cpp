#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    string a,b;
    cin>>a;
    cin>>b;

      // >,<, == compares a string in lexicographis order


    transform(a.begin(),a.end(),a.begin(), ::tolower);   // function to convert the string to lower case
   
     transform(b.begin(),b.end(),b.begin(), ::tolower);   // function to convert the string to lower case

    if(a>b) cout<<"1\n";
    else if(b>a) cout<<"-1\n";
    else cout<<"0\n";
   


   
    
 
}