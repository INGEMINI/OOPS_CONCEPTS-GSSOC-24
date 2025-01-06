#include <iostream>
#include <fstream>
using namespace std;

bool isVowel(char c)
{
  c = tolower(c);
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main()
{
  ifstream inFile("sample.txt");
  if (!inFile)
  {
    cout << "Error opening file!\n";
    return 1;
  }
  char ch;
  int vowelCount = 0;
  while (inFile.get(ch))
  { // Read character by character
    if (isVowel(ch))
    {
      vowelCount++;
    }
  }
  inFile.close();
  cout << "Total number of vowels in the file: " << vowelCount << endl;
  return 0;
}
