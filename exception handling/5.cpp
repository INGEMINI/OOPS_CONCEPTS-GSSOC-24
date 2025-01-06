#include<iostream>
#include<string>
using namespace std;

int main(){
  string str;
  char c;
  int age;

  try{
    
    cout<<"enter gamil.id";
    getline(cin,str);
    cout<<"enter age";
    cin>>age;
    cout<<"enter char less than d";
    cin>>c;

    if(age<0){
      throw age;
    }
    if(str.length()>10){
      throw str;
    }
   if(c>'d'){
    throw c;
   }

   cout<<"age is"<<age;
   cout<<"char is"<<c;
   cout<<"gmail id is"<<str;
    
  }

  catch(int age){
    cout<<"error is "<<age;

  }
  catch(char c ){
    cout<<"error is "<<c;
    
  }
  catch(string str){
    cout<<"error is "<<str;
    
  }

  catch(...){

    cout<<"error";
  }
}