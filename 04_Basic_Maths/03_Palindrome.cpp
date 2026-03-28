#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cout<<"Enter the value of n:";
  cin>>n;
  int originalN = n;
  int reverseN=0;
  while(n>0){
    int k = n%10;
    n/=10;
    reverseN=(reverseN*10)+k;
  }
  reverseN==originalN?cout<<true:cout<<false;  
  return 0;
}