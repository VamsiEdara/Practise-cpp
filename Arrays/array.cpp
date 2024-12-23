#include <iostream>
using namespace std;
int main() {
  int arr [5] = {1, 2, 3, 4, 5};
  int size = sizeof(arr)/sizeof(arr[0]);
  cout << arr << endl; // --> prints the base address of arr (It acts an pointer to the array)
  for(int i =0; i<size; i++){
    cout << arr[i] << " ";
  }
  // arr[n] = baseAddress + (n * sizeof(arr[0]));
  // This gives advantage of random access to elements of array.
  // size of arr (or) length of arr = sizeof(arr)/sizeof(arr[0]);
}