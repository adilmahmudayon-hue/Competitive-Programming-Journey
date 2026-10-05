#include <bits/stdc++.h>
using namespace std;

int main() {
    

   int y ,w;
   cin>>y>>w;

   int x=max(y,w);

   if(x==6) cout<<"1/6";
   else if(x==5) cout<<"1/3"; // 2/6
   else if(x==4) cout<<"1/2"; // 3/6
    else if(x==3) cout<<"2/3"; // 4/6
     else if(x==2) cout<<"5/6"; // 5/6
    else if(x==1) cout<<"1/1"; // 6/6
    
  
  
       
       
    
    
    

    cout<<"\n";

    return 0;
}