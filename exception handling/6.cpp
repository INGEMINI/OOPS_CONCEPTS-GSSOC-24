#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str;
  char c;
  int age;
  cout << "enter gamil.id";
  getline(cin, str);
  cout << "enter age";
  cin >> age;
  cout << "enter char less than d";
  cin >> c;
  try
  {

    if (str.length() > 10)
    {
      throw str;
    }

    cout << "gmail id is" << str;
  }

  catch (string str)
  {
    cout << "error is " << str;
  }
  try
  {

    if (age < 0)
    {
      throw age;
    }
    cout << "age is" << age;
  }
  catch (...)
  {
    cout << "roor ocurred";
  }

  try
  {

    if (c > 'd')
    {
      throw c;
    }

    cout << "char is" << c;
  }
  catch (char c)
  {
    cout << "error is " << c;
  }

  return 0;
}