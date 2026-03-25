#include <bits/stdc++.h>
using namespace std;

void printRightTriangle(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}

int main()
{
  printRightTriangle(5);
  return 0;
}