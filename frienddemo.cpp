#include<iostream>
using namespace std;
class complex;
class calc;
class complex{
    int a,b;
friend void sum(complex o1,complex o2);
    public:
    complex(int c,int d){
        int e=c+d;
        cout<<"contructor "<<endl<<"e is"<<e;

    }
    void setdata(int n1, int n2){
        a=n1;
        b=n2;

    }
  void getdata( ){
    cout<<"no is "<<a<<" +i "<<b<<endl;

  }
};
void sum(complex o1,complex o2){
    complex o3(9,0);
    
     o3.a= o1.a+o2.a;
     o3.b=o1.b+o2.b;
cout<<"no is "<<o3.a<<" +i "<<o3.b<<endl;
cout<<"using public member of class to display using show data  \n ";
o1.getdata();


};



int main(){
    complex o1(9,0),o2(6,7);
 
    o1.setdata(1,2);
    o1.getdata();
    o2.setdata(2,2);
    o2.getdata();
    sum(o1,o2);

return 0;

}