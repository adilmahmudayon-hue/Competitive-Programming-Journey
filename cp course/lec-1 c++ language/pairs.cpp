#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,string> student ;  // creating empty pair named student
    student.first = 103;
    student.second = "Adil";

   cout<< student.first<<" "<<student.second<<"\n"; 

    
 // another way
      pair<int,string> st(155,"Urbi") ;  // creating empty pair named student
   

    cout<< st.first<<" "<<st.second<<"\n"; 


    // another way
      pair<int,string> stu;
      stu=pair<int,string>(103,"Ayon") ;  // creating empty pair named student
   

    cout<< stu.first<<" "<<stu.second<<"\n"; 

        // another way
      pair<string,string> stud;
      stud=make_pair<>("Urbi","Ayon") ;  //** make pair is a function which stores two types of value in a pair variable */
   

    cout<< stud.first<<" "<<stud.second<<"\n"; 

       // another way
      pair<string,int> s;
      s={"Urbi",155} ;  //** packing a pair

      // string name; int age;
      // auto [name,age]=s;
   

    cout<< s.first<<" "<<s.second<<"\n"; 


}