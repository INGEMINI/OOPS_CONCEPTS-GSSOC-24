#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> v;
  v.push_back(9);
  v.push_back(10);
  v.push_back(11);
  v.push_back(12);

  cout << endl;
  for (int vec : v)
  {
    cout << vec << " ";
  }
  cout << endl;
  // v.length() does not exist in stl vector in cpp
  for (int i = 0; i < v.size(); i++)
  {

    cout << v[i] << " ";
  }

  cout << endl;

  for (int i = 0; i < v.size(); i++)
  {

    cout << v.at(i) << " ";
  }
}
