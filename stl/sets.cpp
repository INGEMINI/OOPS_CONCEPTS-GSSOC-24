#include <iostream>
#include <set>
#include <algorithm> // For sorting (though set is always sorted)

using namespace std;

int main()
{
  // Create a set of integers
  set<int> mySet;

  // Method 1: Inserting elements into the set
  mySet.insert(10);
  mySet.insert(20);
  mySet.insert(30);
  mySet.insert(40);

  cout << "Set after inserting elements: ";
  for (auto elem : mySet)
  {
    cout << elem << " | ";
  }
  cout << endl;

  // Method 2: Inserting duplicate elements (will not be added)
  mySet.insert(20); // Duplicate, won't be inserted
  mySet.insert(50); // New element
  cout << "Set after inserting duplicate and new element: ";
  for (auto elem : mySet)
  {
    cout << elem << " | ";
  }
  cout << endl;

  // Method 3: Deleting an element using erase()
  mySet.erase(30); // Erase element with value 30
  cout << "Set after erasing element 30: ";
  for (auto elem : mySet)
  {
    cout << elem << " | ";
  }
  cout << endl;

  // Method 4: Searching for an element using find()
  auto search = mySet.find(20); // Search for 20
  if (search != mySet.end())
  {
    cout << "Found element 20 in the set" << endl;
  }
  else
  {
    cout << "Element 20 not found" << endl;
  }

  // Method 5: Clearing all elements in the set
  mySet.clear();
  cout << "Set after clear(): ";
  if (mySet.empty())
  {
    cout << "Set is empty.";
  }
  else
  {
    for (auto elem : mySet)
    {
      cout << elem << " | ";
    }
  }
  cout << endl;

  // Re-adding elements for other demonstrations
  mySet.insert(10);
  mySet.insert(30);
  mySet.insert(50);
  mySet.insert(40);

  // Method 6: Iterating through the set using iterators (begin and end)
  cout << "Iterating using begin() and end(): ";
  for (auto it = mySet.begin(); it != mySet.end(); ++it)
  {
    cout << *it << " | ";
  }
  cout << endl;

  // Method 7: Iterating through the set using range-based for loop
  cout << "Iterating using range-based for loop: ";
  for (auto elem : mySet)
  {
    cout << elem << " | ";
  }
  cout << endl;

  // Method 8: Accessing the first element using begin()
  cout << "First element in the set: " << *mySet.begin() << endl;

  // Method 9: Accessing the last element using rbegin()
  cout << "Last element in the set: " << *mySet.rbegin() << endl;

  // Method 10: Sorting (A set is always sorted by default)
  cout << "Set after sorting (sets are always sorted): ";
  for (auto elem : mySet)
  {
    cout << elem << " | ";
  }
  cout << endl;

  return 0;
}
