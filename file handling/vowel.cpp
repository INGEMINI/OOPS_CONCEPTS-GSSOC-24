#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch); // Convert to lowercase for comparison
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main() {
    // Writing sample text to the first file
    ofstream outFile("input.txt");
    if (!outFile) {
        cout << "Error opening input file for writing." << endl;
        return 1;
    }
    outFile << "Hello, Mahi! File handling in C++ is interesting!" << endl;
    outFile.close();
    cout << "Sample text written to input.txt." << endl;

    // Reading from the first file and writing vowels to a second file
    ifstream inFile("input.txt");
    ofstream vowelFile("vowels.txt");
    if (!inFile || !vowelFile) {
        cout << "Error opening files for processing." << endl;
        return 1;
    }

    char ch;
    while (inFile.get(ch)) { // Read character by character
        if (isVowel(ch)) {
            vowelFile << ch;
        }
    }

    inFile.close();
    vowelFile.close();
    cout << "Vowels extracted to vowels.txt successfully." << endl;

    return 0;
}
