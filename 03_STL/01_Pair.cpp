#include<bits/stdc++.h>
using namespace std;

int main() {
  // PAIR -> It is a paired variable of any data type , if you want to 
  // add  two different variables combined , Use pair.

  // Syntax ->  
  // Declaration = pair<datatype , datatype> 'name' = {value1 , value2};
  // Access -> 'name'.first = first value , 'name'.second = second value.
  // For example :->
  pair<int,int> p  = {1,2};
  cout<<p.first<<" "<<p.second;  
  return 0;
}
