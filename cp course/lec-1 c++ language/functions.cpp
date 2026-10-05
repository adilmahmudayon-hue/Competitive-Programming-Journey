#include<iostream>
#include<bits\stdc++.h>
using namespace std;

void printnumbers( int s, int e)
{
    for(int i=s; i<=e; i++)
    cout<<i <<" ";

    cout<<"\n";
}
int main()
{
    printnumbers(10,20);
    printnumbers(11,12);
    printnumbers(1,100);

    return 0;


}