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

    string text = "This is a sample file with multiple words.";
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

    string line;
    int wordCount = 0;

    while (getline(infile, line))
    {
      bool inWord = false;

      for (char ch : line)
      {

        if (ch == ' ')
        {
          inWord = false; // End of a word
        }
        if (ch != ' ' && !inWord)
        {
          inWord = true; // Start of a new word
          wordCount++;
        }
      }
    }

    cout << "Number of words in the file: " << wordCount << endl;
  }

  return 0;
}
