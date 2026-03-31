#include <bits/stdc++.h>
using namespace std;

void printNTimes(int n, string s)
{
  if (n > 0)
    cout << s << endl;
  printNTimes(n - 1, s);
}

int main()
{
  printNTimes(10, "Hello world");
  return 0;
}