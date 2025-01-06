#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Employee
{
private:
  int id;
  string name;
  string position;

public:
  // Constructor to initialize employee data
  Employee(int id, string name, string position)
  {
    this->id = id;
    this->name = name;
    this->position = position;
  }

  // Getter methods
  int getId()
  {
    return id;
  }

  string getName()
  {
    return name;
  }

  string getPosition()
  {
    return position;
  }

  // Display employee information
  void display()
  {
    cout << "ID: " << id << ", Name: " << name << ", Position: " << position << endl;
  }
};

int main()
{
  vector<Employee> employees; // Vector to store employee records
  int choice;

  while (true)
  {
    // Display menu
    cout << "\n--- Employee Management System ---\n";
    cout << "1. Add Employee\n";
    cout << "2. Display All Employees\n";
    cout << "3. Search Employee by ID\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
      // Add Employee
      int id;
      string name, position;

      cout << "Enter Employee ID: ";
      cin >> id;
      cin.ignore(); // Clear the input buffer
      cout << "Enter Employee Name: ";
      getline(cin, name);
      cout << "Enter Employee Position: ";
      getline(cin, position);

      // Create Employee object and add to the vector
      Employee newEmployee(id, name, position);
      employees.push_back(newEmployee);

      cout << "Employee added successfully!" << endl;
    }
    else if (choice == 2)
    {
      // Display All Employees
      if (employees.empty())
      {
        cout << "No employees to display." << endl;
      }
      else
      {
        cout << "\n--- All Employees ---\n";
        for (Employee e : employees)
        {
          e.display();
        }
      }
    }
    else if (choice == 3)
    {
      // Search Employee by ID
      int searchId;
      cout << "Enter Employee ID to search: ";
      cin >> searchId;

      bool found = false;
      for (Employee e : employees)
      {
        if (e.getId() == searchId)
        {
          cout << "\nEmployee Found:\n";
          e.display();
          found = true;
          break;
        }
      }

      if (!found)
      {
        cout << "Employee with ID " << searchId << " not found." << endl;
      }
    }
    else if (choice == 4)
    {
      // Exit
      cout << "Exiting the Employee Management System." << endl;
      break;
    }
    else
    {
      cout << "Invalid choice! Please try again." << endl;
    }
  }

  return 0;
}
