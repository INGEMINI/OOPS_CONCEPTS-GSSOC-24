#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
  list<int> myList = {10, 20, 30, 20, 40, 30, 50};

  // Reverse the list
  myList.reverse();

  // Remove duplicates using unique
  myList.sort();   // Sorting before removing duplicates
  myList.unique(); // Removes consecutive duplicates

  // Display the list
  for (int x : myList)
  {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}
