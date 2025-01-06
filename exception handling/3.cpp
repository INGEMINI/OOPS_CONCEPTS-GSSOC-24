#include <iostream>
#include <string>
using namespace std;

int main() {
    try {
        double balance = 5000.0;
        double withdraw;
        cout << "Enter withdrawal amount: ";
        cin >> withdraw;

        if (withdraw > balance) {
            throw string("Insufficient balance!");
        } else if (withdraw < 0) {
            throw string("Invalid withdrawal amount!");
        }
        balance -= withdraw;
        cout << "Withdrawal successful! Remaining balance: " << balance << endl;
    } catch (string msg) {
        cout << "Error: " << msg << endl;
    }
    return 0;
}
