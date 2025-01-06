#include <iostream>

using namespace std;

int main()
{
    try
    {
        int divisor = 0;
        if (divisor == 0)
        {
            throw("Division by zero is not allowed!"); // Throwing a std::string
        }
    }
    catch (const char *msg)
    { // Catching a std::string
        cout << "Error: " << msg << endl;
    }
    return 0;
}
