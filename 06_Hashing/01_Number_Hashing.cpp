#include <bits/stdc++.h>
using namespace std;

int main()
{
  // vector<int> v = {1, 2, 1, 3, 2};
  // int size = 5;
  // int hashArr[size]={0};
  // for (int i = 1; i <= size; i++)
  // {
  //   int count = 0;
  //   for (int j = 0; j < size; j++)
  //   {
  //     if (v[j] == i)
  //       count++;
  //   }
  //   hashArr[i] = count;
  // }

  // for (int i = 0; i < size; i++)
  // {
  //   cout << hashArr[i] << " ";
  // }
  // This approach will take too much time as it checks complete array
  // of size N for N elements , hence O(N*N).
  // Instead we use hashing like this->
  vector<int> v = {1, 2, 1, 2, 3, 4, 2, 4, 5, 6};
  int size = 10;
  int hashArr[size] = {0};
  for (int idx = 0; idx < size; idx++)
  {
    hashArr[v[idx]] += 1;
  }

  for (int idx = 0; idx < size; idx++)
  {
    cout << hashArr[idx]<<" ";
  }
  cout<<endl;
  int q;
  cin>>q;
  cout<<hashArr[q];
  return 0;
}