#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;

    transform(a.begin(),a.end(),a.begin(),::tolower);
    cout<<a<<"\n";
     transform(b.begin(),b.end(),b.begin(),::toupper);
    cout<<b<<"\n";
    



}