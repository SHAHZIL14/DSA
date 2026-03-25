#include<bits/stdc++.h>
using namespace std;
void printM(int n){
  for(int i = 0 ; i < n ; i++){
    for(int j = 0; j <=i ; j ++){
      cout<<j+1;
    }
    for(int k = 0 ; k < (2*n)-2*(i+1); k++){
      cout<<" ";
    }
    for(int j = i; j >=0 ; j--){
      cout<<j+1;
    }
    cout<<endl;
  }
}
int main() {
  printM(4);
  return 0;
}