#include<iostream>
#include <string>
using namespace std;
class person{
    public:
    
 string name;
 string dept;
    person( string name){
       this-> name=name;
    cout<<"constructor called"<<endl<<name;

 }
    int n;
 
 
};
int main(){
    person p1("mahi");
    return 0;

}