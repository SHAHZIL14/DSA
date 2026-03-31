#include<bits/stdc++.h>
using namespace std;
void print(int n , int i){
  if(i<1) return; 
  cout<<i<<endl;
  print(5,i-1);
}

int main() {
  print(5,5);  
  return 0;
}