#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Class definition
class Person
{
private:
  string name;
  string email;

public:
  // Constructor to initialize name and email
  Person() {} // Default constructor

  Person(string name, string email)
  {
    this->name = name;
    this->email = email;
  }

  // Getter methods
  string getName()
  {
    return name;
  }

  string getEmail()
  {
    return email;
  }

  // Method to set data
  void setData(string name, string email)
  {
    this->name = name;
    this->email = email;
  }
};

// Function to validate email (very basic)
bool isValidEmail(string email)
{
  bool atFound = false;
  bool dotFound = false;
  for (int i = 0; i < email.length(); i++)
  {
    if (email[i] == '@')
    {
      atFound = true;
    }
    if (atFound && email[i] == '.')
    {
      dotFound = true;
    }
  }
  return atFound && dotFound; // Return true if both '@' and '.' after '@' are found
}

int main()
{
  int n;
  cout << "Enter the number of people: ";
  cin >> n;

  // Dynamically allocate an array of Person objects
  Person *people = new Person[n]; // DMA: dynamic allocation of Person array

  // Open file to store data
  ofstream outFile("people.txt");
  if (!outFile)
  {
    cout << "Error creating file!\n";
    delete[] people; // Free allocated memory before returning
    return 1;
  }

  // Input name and email for n people
  for (int i = 0; i < n; ++i)
  {
    string name, email;
    cout << "Enter name of person " << (i + 1) << ": ";
    cin.ignore(); // To clear the input buffer
    getline(cin, name);
    cout << "Enter email of person " << (i + 1) << ": ";
    getline(cin, email);

    // Check if the email is valid
    try
    {
      if (!isValidEmail(email))
      {
        throw "Invalid email format!"; // Throwing string as exception
      }

      // Store the person's data in the array of objects
      people[i].setData(name, email);

      // Write the person's name and email to the file
      outFile << people[i].getName() << " " << people[i].getEmail() << endl;
    }
    catch (const char *errorMsg)
    {
      cout << errorMsg << endl;
      continue; // Skip invalid email entry
    }
  }

  outFile.close(); // Close the file

  // Search for a particular email by name
  string searchName;
  cout << "Enter the name to search for: ";
  cin.ignore(); // To clear the input buffer
  getline(cin, searchName);

  ifstream inFile("people.txt");
  if (!inFile)
  {
    cout << "Error opening file!\n";
    delete[] people; // Free allocated memory before returning
    return 1;
  }

  string line;
  bool found = false;
  while (getline(inFile, line))
  {
    int spacePos = line.find(" ");
    string name = line.substr(0, spacePos);
    string email = line.substr(spacePos + 1);

    if (name == searchName)
    {
      cout << "Email of " << name << " is: " << email << endl;
      found = true;
      break;
    }
  }

  if (!found)
  {
    try
    {
      throw "Name not found in the file."; // Throwing string as exception
    }
    catch (const char *errorMsg)
    {
      cout << errorMsg << endl;
    }
  }

  inFile.close(); // Close the file

  // Free the dynamically allocated memory
  delete[] people;

  return 0;
}
