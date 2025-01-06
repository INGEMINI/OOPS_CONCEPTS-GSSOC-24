#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;
int main()
{
  int n;
  vector<int> v;
  vector<int> v1(3);
  vector<int> v2(3, 11);
  vector<int> v3(v1);
  vector<int> v4 = {1, 2, 3, 4};
  cout << "enter n";
  cin >> n;
  vector<int> v6(n);

  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
  v.push_back(6);

  v.insert(v.begin(), 7);
  v.insert(v.begin(), 8);
  v.insert(v.begin(), 9);
  v.insert(v.end(), 10);

  for (auto i = v.begin(); i != v.end(); i++)
  {
    cout << " " << *i << " ";
  }

  cout << endl;

  v.pop_back();

  for (int i = 0; i < v.size(); i++)
  {
    cout << " " << v.at(i) << " ";
  }
  cout << endl;
  v.erase(v.begin() + 2);
  v.erase(v.begin(), v.begin() + 2);

  for (int i = 0; i < v.size(); i++)
  {
    cout << " " << v[i] << " ";
  }
  cout << endl;

  sort(v.begin(), v.end());

  for (auto val : v)
  {
    cout << " " << val << " ";
  }

  cout << endl;

  bool b = binary_search(v.begin(), v.end(), 5);
  if (b)
  {
    cout << "element  found";
    printf(" element found and value is %d", 5);
    cout << endl;
  }
  cout << v.front() << " " << *(v.begin()) << endl;
  cout << v.back() << " " << *(v.end()) << endl;
  reverse(v.begin(), v.end());
  for (auto val : v)
  {
    cout << " " << val << " ";
  }

  return 0;
}