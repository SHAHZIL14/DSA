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
void reverseList(int i, int n, vector<int> &v)
{
  if (i >= n / 2)
  {
    return;
  }
  swap(v[i], v[n - i - 1]);
  reverseList(i + 1, n, v);
}

int main()
{
  vector<int> v = {1, 2, 3, 4, 5};
  printList(v);
  reverseList(0, 5, v);
  printList(v);
  return 0;
}