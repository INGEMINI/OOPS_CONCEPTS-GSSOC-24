#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream outFile("numbers.txt");
  if (!outFile)
  {
    cout << "Error creating file!\n";
    return 1;
  }
  for (int i = 1; i <= 10; i++)
  {
    outFile << i << endl; // Write numbers 1 to 10
  }
  outFile.close();

  ifstream inFile("numbers.txt");
  if (!inFile)
  {
    cout << "Error opening file!\n";
    return 1;
  }
  int num, sum = 0;
  while (inFile >> num)
  {
    sum += num;
  }
  inFile.close();
  cout << "The sum of numbers is: " << sum << endl;
  return 0;
}
