#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(3);
    v.push_back(3);
    v.push_back(5);
    v.push_back(4);
    v.push_back(1);
    v.push_back(2);

    for(auto &it:v)
    cout<<it<<" ";
    cout<<"\n";

    sort(v.begin(),v.end());
     for(auto &it:v)
    cout<<it<<" ";
    cout<<"\n";

    reverse(v.begin(),v.end());
     for(auto &it:v)
    cout<<it<<" ";
    cout<<"\n";

    // counting a number/ element in the vector
    int c=count(v.begin(),v.end(),3);
    cout<<c<<"\n";

    auto x =find(v.begin(),v.end(),1);
    cout<<*x<<"\n";

    int d=distance(v.begin(),x);
    cout<<d<<"\n";

    auto min= min_element(v.begin(),v.end());
    cout<<"Min= "<<*min<<"\n";
       auto max= max_element(v.begin(),v.end());
    cout<<"Max= "<<*max;
}