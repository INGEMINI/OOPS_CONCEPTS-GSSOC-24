#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    // Writing sample text to the first file
    ofstream outFile("unsorted2.txt");
    if (!outFile)
    {
        cout << "Error opening unsorted.txt for writing." << endl;
        return 1;
    }
    outFile << "Zebra\n";
    outFile << "Apple\n";
    outFile << "Orange\n";
    outFile << "Mango\n";
    outFile << "Banana\n";
    outFile.close();
    cout << "Sample text written to unsorted.txt." << endl;

    // Reading from the first file and sorting content
    ifstream inFile("unsorted2.txt");
    if (!inFile)
    {
        cout << "Error opening unsorted.txt for reading." << endl;
        return 1;
    }

    vector<string> lines;
    string line;
    while (getline(inFile, line))
    {
        lines.push_back(line); // Store each line in the vector
    }
    inFile.close();

    // Sort the vector alphabetically
    sort(lines.begin(), lines.end());

    // Writing sorted content to the second file
    ofstream sortedFile("sorted2.txt");
    if (!sortedFile)
    {
        cout << "Error opening sorted.txt for writing." << endl;
        return 1;
    }
    for (int i = 0; i < lines.size(); ++i)
    {
        sortedFile << lines[i] << endl;
    }

    sortedFile.close();

    cout << "Content sorted and written to sorted.txt successfully." << endl;

    return 0;
}
