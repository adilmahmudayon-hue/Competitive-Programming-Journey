#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main()
{
    string name="Adil";
    cout<<name;

    name[0]='P';
    cout<<"\n"<<name;
    cout<<"\n"<<name[2];

    // sorting a string
    sort(name.begin(),name.end());
    cout<<"\n"<<name;

    // reversing a string

    reverse(name.begin(),name.end());
    cout<<"\n"<<name;


    return 0; 
}