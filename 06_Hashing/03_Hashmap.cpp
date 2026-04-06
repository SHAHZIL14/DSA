#include <bits/stdc++.h>
using namespace std;

int main()
{
  // Number Hashing - >
  int arr[] = {1, 2, 3, 1, 3, 2, 4, 5, 4, 6, 3, 5, 7, 5, 8};
  int size = 15;
  map<int, int> hashMap;
  for (int idx = 0; idx < size; idx++)
  {
    hashMap[arr[idx]]++;
  }
  for (auto it : hashMap)
  {
    cout << it.first << "->" << it.second << endl;
  }

  // Character Hashing - >
  string s = "abcabef";
  map<char, int> hashChar;
  for (int idx = 0; idx < s.size(); idx++){
    hashChar[s[idx]]++;
  }

  for(auto it : hashChar){
    cout<<it.first<<"->"<<it.second<<endl;
  }
  return 0;
}