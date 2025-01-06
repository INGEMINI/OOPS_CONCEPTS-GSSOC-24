#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{

  ofstream onfile("sample.txt", ios::app);
  onfile << "hi c i d this is all a simulation" << endl;
  onfile << "23 45 67 kalki2047" << endl;
  onfile << "all is real or not ." << endl;
  string name;
  cout << "enter name";
  getline(cin, name);
  onfile << name << endl;
  onfile.close();
  cout << endl;
  ifstream infile("sample.txt");

  string line;
  char ch;

  while (infile.get(ch))
  {
    cout << ch;
  }
  infile.close();
  cout << endl;
  ifstream in("sample.txt");


  while (getline(in, line))
  {
    cout << line << endl;
  }

  in.close();
  cout << endl;


  ifstream infiles;
  infiles.open("sample.txt");
  while (!infiles.eof())
  {
    getline(infiles, line);
    cout << line << endl;
  }
  infiles.close();
  cout << endl;
  int num, sum = 0;
  string word;
  ifstream ifile("sample.txt");

  
  while (ifile >> word)
  {
    sum++;
  }

  cout << "total words r " << sum;
  ifile.close();
}