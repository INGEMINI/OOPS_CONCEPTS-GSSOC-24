#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  ifstream inFile;
  inFile.open("example.txt");
  if (!inFile.is_open())
  { // Check if the file is open
    cout << "Error opening file!\n";
    return 1;
  }
  string line;
  while (getline(inFile, line))
  { // Read until EOF
    cout << line << endl;
  }
  inFile.close();
  return 0;
}
