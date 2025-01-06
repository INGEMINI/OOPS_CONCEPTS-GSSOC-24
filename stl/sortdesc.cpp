#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  // Create a vector
  vector<int> vec = {10, 30, 20, 50, 40};

  // Sort in ascending order
  sort(vec.begin(), vec.end());

  // Reverse the sorted vector to get descending order
  reverse(vec.begin(), vec.end());

  // Print the sorted vector
  cout << "Vector sorted in descending order: ";
  for (int i : vec)
  {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
