#include <iostream>
#include <vector>
#include <algorithm>
#include <functional> // For std::greater

using namespace std;

int main()
{
  // Create a vector
  vector<int> vec = {10, 30, 20, 50, 40};

  // Sort in descending order using std::greater
  sort(vec.begin(), vec.end(), greater<int>());

  // Print the sorted vector
  cout << "Vector sorted in descending order: ";
  for (int i : vec)
  {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
