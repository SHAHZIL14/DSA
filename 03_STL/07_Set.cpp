#include<bits/stdc++.h>
using namespace std;

int main() {
  // SET -> Stores unique elements in sorted order.
  
  // Syntax ->
  // Declaration -> set<datatype> name;

  // !!Methods ->
  // 1. insert(k) -> Adds k into the set (if it doesn't already exist). O(log n)
  // 2. emplace(k) -> Similar to insert but more efficient.
  
  // 3. Deleting ->
  //    - erase(value) -> Deletes the specific value.
  //    - erase(iterator) -> Deletes element at that memory address.
  //    - erase(start_it, end_it) -> Deletes a range.

  // 4. Searching ->
  //    - find(k) -> Returns iterator to k. If not found, returns name.end().
  //    - count(k) -> Returns 1 if exists, 0 if not (since it's unique).

  // 5. Bounds ->
  //    - lower_bound(k) -> Returns iterator to first element >= k.
  //    - upper_bound(k) -> Returns iterator to first element > k.

  return 0;
}