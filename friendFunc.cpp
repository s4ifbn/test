#include <iostream>
using namespace std;

class student;

class teacher{
 string name;
 int age;

 public:
   teacher(string n, int a){
    name = n;
    age = a;
   }

   void print(){
    cout<<name<<" "<<age<<endl;
   }

   friend void incAge(teacher&, student&);

};

class student{
 string name;
 int age;

 public:
   student(string name, int age){
    this->name = name;
    this->age = age;
   }

    student(){
    cout<<"Enter info: ";
    cin >> name >> age;
   }

   void print(){

    cout<<name<<" "<<age<<endl;
   }

   friend void incAge(teacher&, student&);
};

int main()
{
    student nw[3];

    for(int i=0; i<3; i++)
     nw[i].print();

    //incAge(t1, s1);

    //s.print();

    return 0;
}

void incAge(teacher &t1, student &s1){

  t1.age++;
  s1.age++;

}

