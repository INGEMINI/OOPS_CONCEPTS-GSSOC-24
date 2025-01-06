#include <iostream>
#include <list>
#include <algorithm> // For sorting and reversing

using namespace std;

void display_list(list<int> &l)
{
  // Display elements in the list using an iterator
  for (auto it = l.begin(); it != l.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}

int main()
{
  // Create an empty list of integers
  list<int> myList;
  list<int> myList2;
  // Push elements to the front and back
  myList.push_back(10); // Add 10 to the back
  myList.push_back(20); // Add 20 to the back
  myList.push_back(30); // Add 30 to the back
  myList.push_front(5); // Add 5 to the front
  myList.push_front(0); // Add 0 to the front

  cout << "List after push_back and push_front operations: ";
  display_list(myList);

  // Pop elements from the front and back
  myList.pop_back();  // Remove the last element (30)
  myList.pop_front(); // Remove the first element (0)

  cout << "List after pop_back and pop_front operations: ";
  display_list(myList);

  // Insert an element at a specific position
  auto it = myList.begin();
  advance(it, 1);        // Move iterator to the second element
  myList.insert(it, 15); // Insert 15 at the second position

  cout << "List after insert operation: ";
  display_list(myList);

  // Delete an element at a specific position
  it = myList.begin();
  advance(it, 2);   // Move iterator to the third element
  myList.erase(it); // Erase the element at the third position (20)

  cout << "List after erase operation: ";
  display_list(myList);

  // Search for an element
  auto search = find(myList.begin(), myList.end(), 15);
  if (search != myList.end())
  {
    cout << "Element 15 found in the list." << endl;
  }
  else
  {
    cout << "Element 15 not found in the list." << endl;
  }

  // Sort the list
  myList.sort();
  cout << "List after sorting: ";
  display_list(myList);

  // Reverse the list
  myList.reverse();
  cout << "List after reversing: ";
  display_list(myList);

  // Clear the entire list
  myList.clear();
  cout << "List after clear operation: ";
  display_list(myList);

  // Recreate the list and demonstrate front, back, begin, end
  myList.push_back(40);
  myList.push_back(50);
  myList.push_back(60);

  cout << "Front element: " << myList.front() << endl;
  cout << "Back element: " << myList.back() << endl;

  cout << "Begin and end iteration: ";
  for (auto it = myList.begin(); it != myList.end(); ++it)
  {
    cout << *it << " ";
  }
  cout << endl;

  return 0;
}
