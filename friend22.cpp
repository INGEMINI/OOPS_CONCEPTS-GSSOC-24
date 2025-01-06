//friend function method 2

#include<iostream>
using namespace std;
class A;
class B;
class A{
    int a;
    public:
    A(int x){
        a=x;

    }
    friend void greatest(A a1,B b1);


};

class B{
int b;
public:
B(int y){
    b=y;
}
friend void greatest(A a1,B b1);


};

void greatest(A a1, B b1){
    if(a1.a==b1.b){
        cout<<"equal";

    }
    else if(a1.a>b1.b){
        cout<<"a is greater";
    }

    else{
        cout<<"b is greater";

    }
}

int main(){
    A a1(10);
    B b1(2);
    greatest(a1,b1);
    return 0;

}