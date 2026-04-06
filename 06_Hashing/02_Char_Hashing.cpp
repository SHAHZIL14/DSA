#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s = "abcabef";
  int size = 256; 
  int charHash[size] = {0};
  for (int idx = 0; idx < s.size(); idx++){
    charHash[s[idx]]++;
  }
  for (int index = 0; index < size; index++){
    cout<< charHash[index]<<" ";
  }
  return 0;
}