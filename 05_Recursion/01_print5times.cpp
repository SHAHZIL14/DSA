#include <bits/stdc++.h>
using namespace std;
void print(int n, int i)
{
  if(i>n) return;
  cout << "Hello world" << endl;
  print(n,i+1);
}
int main()
{
  print(5,1);
  return 0;
}