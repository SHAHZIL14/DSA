#include <bits/stdc++.h>
using namespace std;
void printList(list<int> &v)
{
  for (auto it : v)
  {
    cout << it << '	';
  }
}
int main()
{
  // Extraction Of Digits ->
  // Getting modulo by 10 -> Will return the last digit of the number as "INTEGER".
  int n;
  list<int> l;
  cout << "Ente the value of n: ";
  cin >> n;
  while (n > 0)
  {
    int k = n % 10;
    l.push_front(k);
    n = n / 10;
  }
  printList(l);
  return 0;
}