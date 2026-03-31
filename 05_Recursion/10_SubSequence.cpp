#include <bits/stdc++.h>
using namespace std;

void subSequence(int idx, vector<int> &ds, int arr[], int n)
{
  if (idx == n)
  {
    for (auto it : ds)
    {
      cout << it << '	';
    }
    cout << endl;
    return;
  }
  subSequence(idx + 1, ds, arr, n);
  ds.push_back(arr[idx]);
  subSequence(idx + 1, ds, arr, n);
  ds.pop_back();
}

int main()
{
  int arr[] = {1, 2, 3};
  vector<int> ds;
  subSequence(0, ds, arr, 3);

  // TC-> Every recursion take two calls one for take and other for non take
  // so it will be 2^N and for every base condition we print the N values
  // so total time complexity will be -> O((2^N)*N).

  // SC-> At most at every call of recursion the maximum function call will be
  // three because till the third index the recurring process will be hence
  // the total auxilliary space complexity -> O(N).
  return 0;
}