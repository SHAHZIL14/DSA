#include <bits/stdc++.h>
using namespace std;
// Parameterized->
void summation(int i, int sum)
{
  if (i < 1)
  {
    cout << sum;
    return;
  }
  summation(i - 1, sum + i);
}

// Functional->
int nSum(int n)
{
  if (n == 0)
    return 0;
  return n + nSum(n-1);
}


int main()
{
  // summation(5, 0);
  cout<<nSum(5);
  return 0;
}