#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int grades;
    cin>>grades;
    if(grades>=90) cout<<"Excellent\n";
    else if( grades>=70) cout<<"Good\n";
    else if( grades>=40) cout<< "Fair\n";
    else cout<<"Fail";
 }
