#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    string str;

    cin>>str;

    int ca=0,cd=0;
    for(int i=0;i<n; i++)
    {
        if(str[i]=='A') ca++;
        else cd++;
    }

    if(ca>cd) cout<<"Anton\n";
    else if(cd>ca) cout<<"Danik\n";
    else cout<<"Friendship\n";


    return 0;
}