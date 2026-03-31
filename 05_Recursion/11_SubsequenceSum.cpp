#include <bits/stdc++.h>
using namespace std;

void printList(vector<int> &v)
{
  for (auto it : v)
  {
    cout << it << '	';
  }
  cout << endl;
}

int subSequenceSum(int idx, vector<int> ds, int arr[], int n, int sum, int s)
{
  if (idx == n) // This will check that have we reached the last index
  // of the array , have we iterated it completely.
  {
    if (sum == s)
      return 1; // This will give us increment to our count
    // if condition of sum meets.
    else
      return 0;
  }
  ds.push_back(arr[idx]);
  s += arr[idx];
  int leftCall = subSequenceSum(idx + 1, ds, arr, n, sum, s);
  // The result we get from left recursion call , whether the subsequence
  // is equal to sum or not as 0 or 1.
  s -= arr[idx];
  ds.pop_back();
  int rightCall = subSequenceSum(idx + 1, ds, arr, n, sum, s);
  // The result we get from right recursion call , whether the subsequence
  // is equal to sum or not as 0 or 1.

  return leftCall + rightCall; // At the End we return the sum of 
  //  result from left and right recursion call . 
}

int main()
{
  int sum = 4;
  int arr[] = {1, 2, 3, 4, 5};
  vector<int> ds;
  cout << subSequenceSum(0, ds, arr, 5, sum, 0);
  return 0;
}