#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  // File name
  string filename = "sample.txt";

  // Writing to the file
  {
    ofstream outfile(filename);
    if (!outfile)
    {
      cerr << "Error creating file!" << endl;
      return 1;
    }

    string text = "This is a 2 sample file with multiple words.";
    outfile << text;
    cout << "Text written to file: " << text << endl;
  }

  // Reading from the file and counting words
  {
    ifstream infile(filename);
    if (!infile)
    {
      cerr << "Error opening file!" << endl;
      return 1;
    }

    string word;
    int wordCount = 0;

    // Read the file word by word
    while (infile >> word)
    {
      wordCount++;
    }

    cout << "Number of words in the file: " << wordCount << endl;
  }

  return 0;
}
