#include<bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cout<<"Enter the value of N:";
  cin>>N;
  int count = 0;
  while(N>0){
    N/=10;
    count++;
  }  
  cout<<count;
  return 0;
}

// NOTE-> If the logic is based on division we can get to logN also.