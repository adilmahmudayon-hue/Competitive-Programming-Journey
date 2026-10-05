#include<iostream>
#include<bits\stdc++.h>

using namespace std;
int main()
{
    cout<<"Ordered set:";
    set <int> s;
    s.insert(10);
    s.insert(20);
    s.insert(5);
    s.insert(10);
    s.insert(1);
    s.insert(5);

    for( auto &it:s)
    {
        cout<<it<<" ";
    }

    cout<<"\nUnordered set:";

    unordered_set <int> s2;
     s2.insert(10);
    s2.insert(20);
    s2.insert(5);
    s2.insert(10);
    s2.insert(1);
    s2.insert(5);

    for( auto &it:s2)
    {
        cout<<it<<" ";
    }

     cout<<"\nMulti set:";
    
    multiset <int> s3;
      s3.insert(10);
    s3.insert(20);
    s3.insert(5);
    s3.insert(10);
    s3.insert(1);
    s3.insert(5);

    for( auto &it:s3)
    {
        cout<<it<<" ";
    }

}