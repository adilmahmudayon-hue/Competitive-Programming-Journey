#include<bits/stdc++.h>
using namespace std;
int main()
{
    // set declaration
    set<int> s={1,1,2,3,3,2,3};

    cout<<s.size()<<"\n";

    for(auto it:s)
    cout<<it<<" ";
    cout<<"\n";

    // clearing a set
    s.clear();

    // empty checking a set
    cout<<s.empty()<<"\n";

    // insert/input elements in a set
    s.insert(2);
    s.insert(3);
    s.insert(2);
    s.insert(1);
    s.insert(4);
    s.insert(5);

    // setsize
    cout<<s.size()<<"\n";

    // iterating throughout the ste
    for(auto it:s)
    cout<<it<<" ";
    cout<<"\n";
    
    // frequency of an element
    cout<<s.count(5)<<"\n";
    
    // first element of a set
    cout<<*s.begin()<<"\n";
  

    // last element of set
    cout<<*(--s.end())<<"\n";
     cout<<*(s.rbegin())<<"\n";

     // delet / erasing any element of a set
   
     cout<<s.size()<<"\n";
     for(auto it:s)
     cout<<it<<" ";
     cout<<"\n";

     // deleting using pointer(1st  & last element)

     s.erase(--s.end());
       cout<<s.size()<<"\n";
     for(auto it:s)
     cout<<it<<" ";
     cout<<"\n";

     // sorting a set elements in decreasing order

     set<int,greater<int>>st;
     st.insert(2);
      st.insert(2);

       st.insert(1);

        st.insert(3);


         st.insert(4);

          st.insert(6);

           st.insert(9);

            st.insert(5);

            st.erase(50);

            cout<<s.size()<<"\n";

            for(auto it :st)
            cout<<it<<" ";
            cout<<"\n";

              

}