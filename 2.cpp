#include<iostream>
using namespace std;
int main(){
    int m[5]={1,6,3,4,5};
    cout<<"enter";
    //for(int i=0;i<5;i=i+1){
        //cin>>m[i];
        
   // }
    int *p=m;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<(*p+1)<<endl;
    cout<<*(p+1)<<endl;
}