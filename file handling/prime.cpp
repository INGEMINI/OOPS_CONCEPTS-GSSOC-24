#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    // Writing numbers to the first file
    ofstream outFile("numbers.txt");
    if (!outFile) {
        cout << "Error opening numbers.txt for writing." << endl;
        return 1;
    }
    outFile << "11 24 7 18 29 4 13 31"; // Example numbers
    outFile.close();
    cout << "Numbers written to numbers.txt." << endl;

    // Reading numbers from the file and summing primes
    ifstream inFile("numbers.txt");
    if (!inFile) {
        cout << "Error opening numbers.txt for reading." << endl;
        return 1;
    }

    int num, primeSum = 0;
    while (inFile >> num) { // Read each number
        if (isPrime(num)) {
            primeSum += num;
        }
    }
    inFile.close();

    // Writing the sum of primes to another file
    ofstream outPrimeFile("primes_sum.txt");
    if (!outPrimeFile) {
        cout << "Error opening primes_sum.txt for writing." << endl;
        return 1;
    }
    outPrimeFile << "Sum of prime numbers: " << primeSum << endl;
    outPrimeFile.close();

    cout << "Sum of primes written to primes_sum.txt successfully." << endl;

    return 0;
}
