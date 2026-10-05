#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<pair<int,int>>s;
    
    s.insert({2,3});
      s.insert({3,2});
        s.insert({2,1});
          s.insert({5,3});
            s.insert({3,1});
              s.insert({4,2});
                s.insert({2,2});
                  s.insert({2,3});

                  cout<<s.size()<<"\n";

                  for(auto it:s)
                  cout<<it.first <<" " <<it.second<<"\n";
                  cout<<"\n";


       set<pair<int,int>,greater<pair<int,int>>> st;
         st.insert({2,3});
      st.insert({3,2});
        st.insert({2,1});
          st.insert({5,3});
            st.insert({3,1});
              st.insert({4,2});
                st.insert({2,2});
                  st.insert({2,3});

                  cout<<st.size()<<"\n";

                  for(auto it:st)
                  cout<<it.first <<" " <<it.second<<"\n";
                  cout<<"\n";
}