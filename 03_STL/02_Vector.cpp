#include<bits/stdc++.h>
using namespace std;

int main() {
  // VECTOR -> It is an array with variable size , dynamic in nature.

  // Syntax ->
  // Declaration-> vector <datatype> 'name'; 

  // !!Methods->
  // 1. Push_back(k)-> Adds k inside the vector at the end.
  // 2. emplace_back(k)-> Adds k inside the vector at the end but faster than push_back.
  // 4. vector <datatype> 'name'(n,k);-> Creates new vector with n size with k at each index.
  // 5. vector <datatype> 'name'(n);-> Creates new vector with n size with garbage value at each index.
  // 6. vector <datatype> 'name'('vector');-> Creates new copy of the vector passed .

  // 7.0 Accessing value -> 
  //  1. 'vector'[index] -> Returns the value at that index .
  //  2. 'vector'.at(index) -> Returns the value at that index .

  // 7.1 Deleting value -> 
  //  1. vector.erase(iterator)-> Deletes the last index value of the vector.
  //  2. vector.erase(start iterator ,  end iterator)-> Deletes all the values from start till end - 1.

  // 7.2 Inserting value -> 
  //  1. vector.insert(iterator, value)-> Insert value at the iterator.
  //  1. vector.insert(iterator, frequency , value)-> Insert value of frequency from the iterator.
  
  // 8. vector.begins() -> Returns first index memory address.
  // 9. vector.end() -> Returns memory address just after the last index.
  // 10. vector.rend() -> Returns memory address just before the first index.

  // Iterators->It is a memory address of the index;
  // Syntax-> vector<datatype>::iterator 'name' = vector.begin() or vector.end()
  // or any other method that returns an iterator.
  // *(iterator)-> Returns the value at that memory address.
  // auto 'name' = iterator-> Will assing the iterator of data type automatically.









  return 0;
}