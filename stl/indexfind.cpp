#include <iostream>
#include <vector>

int main()
{
  // Create a vector of integers
  std::vector<int> vec = {10, 20, 30, 40, 50};

  // Element to find
  int element = 30;

  // Variable to store the index
  int index = -1; // -1 indicates element not found

  // Loop through the vector to find the element
  for (int i = 0; i < vec.size(); ++i)
  {
    if (vec[i] == element)
    {
      index = i; // Store the index
      break;     // Exit the loop once the element is found
    }
  }

  // Check if the element was found
  if (index != -1)
  {
    std::cout << "Element " << element << " found at index " << index << std::endl;
  }
  else
  {
    std::cout << "Element " << element << " not found in the vector." << std::endl;
  }

  return 0;
}
