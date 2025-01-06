#include<iostream>
using namespace std;
class complex{

int a,b;
public:
friend complex add(complex ob1,complex ob2);
complex(int x,int y){
    a=x;
    b=y;

}
complex (){}

void display(){
    cout<<a<<" + "<<b;

}
};


complex add(complex ob1,complex ob2){

    complex temp;
    temp.a=ob1.a+ob2.a;
    temp.b=ob1.b+ob2.b;
    return temp;

}

int main(){
    complex c1(10,20), c2(30,40),c3;
    c3=add(c1,c2);
    c3.display();
    return 0;

}


