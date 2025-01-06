#include<iostream>
#include<string>

using namespace std;

class student{
int id;
int rollno,marks;
string name;
friend void getget( student&);
public:
static int count;
//.count++;
student(){
cout<<"constructor is called. enter id";
cin>>id;
}
//student(int i){
//cout<<"constructor is called.";

//id=i;
//}

void getinfo();

void setinfo(){
cout<<"enter roll no";
cin>>rollno;
cout<<"enter marks";
cin>>marks;
cout<<"enter name";
getline(cin,name);

cout<<endl;

getinfo();
}

};





void student :: getinfo(){
cout<< id<<endl<<rollno<<endl<<marks<<endl;
int size=name.length();
int j=0;
for(j=0;j<(size);j=j+1){
cout<<name[j];
}
cout<<endl;

}


int student :: count;

void getget(student &s1){

cout<<endl<<"getinfo part2"<<endl;
cout<<s1.id<<endl<<s1.rollno<<endl<<s1.marks<<endl;
cout<<s1.name;
}






int main(){
student s1;
//student s2(4);
s1.setinfo();
getget(s1);


return 0;
}