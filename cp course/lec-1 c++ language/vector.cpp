#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main()
{
    vector<int> v; // creates a blank vector

    // initializing / putting values in the vector
    v.push_back(1);
    v.push_back(2);
    v.push_back(9);
   v.push_back(5);
     v.push_back(11);

    v.push_back(3);
    v.pop_back();

    int size=v.size();
    cout<<size<<"\n";

    // itrating vector(printing)
    for( int i=0; i<v.size(); i++)
    cout<<v[i]<<" ";
    cout<<"\n";

    // another way
    for(auto &it:v)
    {
        cout<<it<<" ";
    }

    cout<<"\n";

    sort(v.begin(),v.end());

    for(auto &it:v)
    cout<<it<<" ";

    cout<<"\n";

    // reversing vector
    reverse(v.begin(),v.end());
        for(auto &it:v)
    cout<<it<<" ";

    // inserting in a vector
    v.insert(v.end(),10);
        cout<<"\n";

    
        for(auto &it:v)
    cout<<it<<" ";

    cout<<"\n";
    vector<int>v2(5,10);
    for(auto &it:v2)
    cout<<it<<" ";

    return 0;
    
} 
