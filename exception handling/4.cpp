#include <iostream>
#include <string>
using namespace std;

int main() {
    try {
        int attempts = 0;
        string correctPassword = "password123";
        string enteredPassword;

        while (attempts < 3) {
            cout << "Enter password: ";
            cin >> enteredPassword;
            if (enteredPassword == correctPassword) {
                cout << "Login successful!" << endl;
                return 0;
            }
            attempts++;
        }
        throw string("Too many failed login attempts!");
    } catch (string msg) {
        cout << "Error: " << msg << endl;
    }
    return 0;
}
