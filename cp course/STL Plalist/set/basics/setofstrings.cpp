#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string> s;
    s.insert("Ayon");
    s.insert("Urbi");
    s.insert("Ayon");
    s.insert("Adil");
    s.insert("Tahiat");
    s.insert("Mahmud");
    s.insert("Tarannum");

    cout<<s.size()<<"\n";

    for(auto it:s)
    cout<<it<<" ";
    cout<<"\n";

    // sorting in descending order

        set<string,greater<string>> st;
    st.insert("Ayon");
    st.insert("Urbi");
    st.insert("Ayon");
    st.insert("Adil");
    st.insert("Tahiat");
    st.insert("Mahmud");
    st.insert("Tarannum");

    cout<<st.size()<<"\n";

    for(auto it:st)
    cout<<it<<" ";
}