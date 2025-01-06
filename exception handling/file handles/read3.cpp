#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  ifstream inFile("example.txt");
  if (!inFile)
  {
    cout << "Error opening file!\n";
    return 1;
  }
  string line;
  while (!inFile.eof())
  { // Check for end of file
    getline(inFile, line);
    cout << line << endl;
  }
  inFile.close();
  return 0;
}
