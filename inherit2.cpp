//method 2 in constructor in inheritance 
#include<iostream>
using namespace std;
class a{
    int x ;
    public:
    
    a(int v ){
        cout<<"const of a is called";
        x=v;
        cout <<endl<<x<<endl;
    }
};
class b{
    int p;

     public:
     
     b(int q){
        cout<<"const of b is called";
        p=q;
        cout<<endl<<p<<endl;
    }
};
class c: public a, public b {
    int g;
 public:
     c( int h,int m, int n ) : a(m), b( n){
        cout<<"const of c is called";
        g=h;
        cout<<endl<<g<<endl;
    }
};

int main(){
    a obj(1);

    cout<< endl << "now for obj 2 "<<endl;
    c obj1(2,1,0);

    return 0;

}