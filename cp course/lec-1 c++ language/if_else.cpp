#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //cout<<"Enter name and age of the driver:\n";
    string name; int age;
    cin>>name>>age;

    if(age<18) cout<<name<<" is not eligible";
    else cout<<name<<" is eligible";

    return 0;
}
