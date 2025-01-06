#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream inFile("sample.txt");
  if (!inFile)
  {
    cout << "Error opening file!\n";
    return 1;
  }
  char ch;
  while (inFile.get(ch))
  { // Read until end of file
    cout << ch;
  }
  inFile.close();
  return 0;
}
