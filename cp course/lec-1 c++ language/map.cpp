#include<iostream>
#include<bits\stdc++.h>
#include<map>

using namespace std;
int main()
{
    cout<<"Map(ordered):\n";
    map<int,string>mp;
    mp[103]="Adil";
     mp[101]="Mahi";
    mp[102]="Arijit";
    mp[104]="Oishee";
    mp[104]="Nishat";
    mp[101]="Arian";
    for(auto &it:mp)
    cout<<it.first<<" "<<it.second<<"\n";


     cout<<"Map(Unordered):\n";
    unordered_map<char,int>mp2;
    mp2['C']=103;
     mp2['A']=101;
    mp2['B']=102;
    mp2['D']=105;
    mp2['D']=104;
    mp2['A']=101;
    for(auto &it:mp2)
    cout<<it.first<<" "<<it.second<<"\n";

         cout<<"Map(Multi):\n";
    multimap<int,string>mp3;

    pair<int,string> p1={101,"Arian"};
    mp3.insert(p1);
        pair<int,string> p2={101,"Arijit"};
    mp3.insert(p2);
        pair<int,string> p3={103,"Adil"};
    mp3.insert(p3);
  
    for(auto &it:mp3)
    cout<<it.first<<" "<<it.second<<"\n";
}