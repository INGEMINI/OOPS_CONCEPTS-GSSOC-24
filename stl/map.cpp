#include <iostream>
#include <map>
#include <algorithm> // For sorting

using namespace std;

int main()
{
  // Create a map: key = int, value = string
  map<int, string> myMap;

  // Method 1: Inserting elements into the map using insert()
  myMap.insert({1, "One"});
  myMap.insert({2, "Two"});
  myMap.insert({3, "Three"});
  myMap.insert({4, "Four"});

  cout << "Map after inserting elements: ";
  for (auto &pair : myMap)
  {
    cout << pair.first << ": " << pair.second << " | ";
  }
  cout << endl;

  // Method 2: Using the subscript operator to insert or update elements
  myMap[5] = "Five";          // Insert key-value pair (5, "Five")
  myMap[3] = "Updated Three"; // Update the value for key 3
  cout << "Map after inserting/updating elements: ";
  for (auto &pair : myMap)
  {
    cout << pair.first << ": " << pair.second << " | ";
  }
  cout << endl;

  // Method 3: Deleting an element using erase() with key
  myMap.erase(2); // Erase element with key 2
  cout << "Map after erasing key 2: ";
  for (auto &pair : myMap)
  {
    cout << pair.first << ": " << pair.second << " | ";
  }
  cout << endl;

  // Method 4: Deleting an element using erase() with iterator
  auto it = myMap.find(4); // Find the iterator pointing to key 4
  if (it != myMap.end())
  {
    myMap.erase(it); // Erase element at the iterator
  }
  cout << "Map after erasing key 4 using iterator: ";
  for (auto &pair : myMap)
  {
    cout << pair.first << ": " << pair.second << " | ";
  }
  cout << endl;

  // Method 5: Searching for an element using find()
  auto search = myMap.find(3); // Search for key 3
  if (search != myMap.end())
  {
    cout << "Found key 3: " << search->second << endl;
  }
  else
  {
    cout << "Key 3 not found" << endl;
  }

  // Method 6: Clearing all elements in the map
  myMap.clear();
  cout << "Map after clear(): ";
  if (myMap.empty())
  {
    cout << "Map is empty.";
  }
  else
  {
    for (auto &pair : myMap)
    {
      cout << pair.first << ": " << pair.second << " | ";
    }
  }
  cout << endl;

  // Re-adding elements for other demonstrations
  myMap.insert({10, "Ten"});
  myMap.insert({20, "Twenty"});
  myMap.insert({30, "Thirty"});

  // Method 7: Iterating through map using iterators (begin and end)
  cout << "Iterating using begin() and end(): ";
  for (auto it = myMap.begin(); it != myMap.end(); ++it)
  {
    cout << it->first << ": " << it->second << " | ";
  }
  cout << endl;

  // Method 8: Iterating through map using range-based for loop
  cout << "Iterating using range-based for loop: ";
  for (auto &pair : myMap)
  {
    cout << pair.first << ": " << pair.second << " | ";
  }
  cout << endl;

  // Method 9: Accessing the first element using front()
  // Note: `std::map` does not have front(), we can access the first element using `begin()`
  cout << "First element in the map: " << myMap.begin()->first << ": " << myMap.begin()->second << endl;

  // Method 10: Accessing the last element using back()
  // Note: `std::map` does not have back(), we can access the last element using `rbegin()`
  cout << "Last element in the map: " << myMap.rbegin()->first << ": " << myMap.rbegin()->second << endl;

  // Method 11: Sorting the map (Map is always sorted by keys)
  cout << "Map after sorting (keys are always sorted in map): ";
  for (auto &pair : myMap)
  {
    cout << pair.first << ": " << pair.second << " | ";
  }
  cout << endl;

  return 0;
}
