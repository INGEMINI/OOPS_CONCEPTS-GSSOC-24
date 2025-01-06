#include <iostream>
#include<fstream>
#include<string>
using namespace std;
bool isvow( char ch){
  ch=tolower(ch);
 
 if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
  return true;
 }
 return false;

}

int main(){

  ofstream onfile("intro.txt");
  onfile<<"my name is ingemini";
  onfile<<"i am 19 yr old";
  onfile<<"thats all for the day";
  onfile.close();

  cout<<"now copying vowel from 1 file to another file"<<endl;
   char ch;
  ifstream infile("intro.txt");
  ofstream oonfile("vowel2.0.txt");

  while(infile.get(ch)){
    if(isvow(ch)){
      oonfile<<ch;
      oonfile<<" ";

    }


  }

infile.close();
oonfile.close();

}
