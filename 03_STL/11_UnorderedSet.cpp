#include<bits/stdc++.h>
using namespace std;

int main() {
  // UNORDERED SET -> Stores unique elements, but NOT sorted.
  // Efficiency -> Average O(1) for all operations.

  // Syntax ->
  // Declaration -> unordered_set<datatype> name;

  // !!Methods ->
  // 1. insert(k) -> Adds k. Average O(1), Worst case O(n).
  // 2. erase(k) -> Removes k from the set.
  // 3. find(k) -> Returns iterator to k. If not found, returns name.end().
  // 4. count(k) -> Returns 1 if exists, 0 if not.

  // !!Key Constraints ->
  // 1. Random Order -> The order of elements is randomized based on the hash.
  // 2. No Bounds -> lower_bound() and upper_bound() do NOT work here.
  // 3. Use Case -> Use when you only care if an element exists, not its order.

  // Iterator Example ->
  // for(auto it = name.begin(); it != name.end(); it++) {
  //    cout << *it << " ";
  // }

  return 0;
}