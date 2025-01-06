#include<iostream>
using namespace std;

class demo{
  int a=5;
    public:
    demo(){
        cout<<a<<endl;
        cout<<"default cons called";
    }


    demo( demo &z){
        cout<<"copy cons called";
        a=z.a;
        cout<<a<<endl;
    }

};

int main(){
    demo aa;
    demo bb(aa);
    return 0;

}