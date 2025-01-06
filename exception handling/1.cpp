#include <iostream>
#include <string> // Include the string library
using namespace std;

int main() {
    try {
        int divisor = 0;
        if (divisor == 0) {
            throw string("Division by zero is not allowed!"); // Throwing a std::string
        }
    } catch (string msg ) { // Catching a std::string
        cout << "Error: " << msg << endl;
    }
    return 0;
}
