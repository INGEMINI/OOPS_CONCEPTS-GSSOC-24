#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  ifstream inFile("people.txt");
  if (!inFile)
  {
    cout << "Error opening file!\n";
    return 1;
  }
  string word, target = "file";
  int count = 0;
  while (inFile >> word)
  { // Read word by word
    if (word == target)
    {
      count++;
    }
    cout << word << endl;
  }
  inFile.close();
  cout << "The word '" << target << "' appears " << count << " times in the file.\n";
  return 0;
}
