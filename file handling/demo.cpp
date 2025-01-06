#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Writing to a file
    ofstream outFile("example.txt");
    if (!outFile) {
        cout << "Error opening file for writing." << endl;
        return 1;
    }
    outFile << "Hello, Mahi!" << endl;
    outFile << "This is a basic file handling example." << endl;
    outFile.close();
    cout << "Data written to file successfully." << endl;

    // Reading from the file
    ifstream inFile("example.txt");
    if (!inFile) {
        cout << "Error opening file for reading." << endl;
        return 1;
    }
    string line;
    cout << "Data from the file:" << endl;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

    return 0;
}
