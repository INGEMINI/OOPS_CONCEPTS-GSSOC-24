#include <iostream>
#include <vector>

using namespace std;

int main()
{

  vector<int> v = {1, 2, 3, 4};

  cout << "hi" << endl;
  
  cout << *(v.begin()) << endl;
  cout << *(v.end()) << endl;
  cout << *((v.end())--) << endl;
  cout << *(--v.end()) << endl; // Pre-decrement ensures the iterator is valid before dereferencing.
  cout << v.back() << endl;     // Directly access the last element of the vector.
}