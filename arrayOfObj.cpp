#include <iostream>
using namespace std;

int const size = 3;

class student{
private:
  string name;
  int age;
  float deg1,deg2,deg3;
public:
  student(){
   cout<<"Enter info: ";
   cin>>name>>age;
   cin>>deg1>>deg2>>deg3;
  }

  void print(){
   cout<<name<<" "<<age<<endl;
  }

  float avg(){
   return (deg1+deg2+deg3)/3.0;
  }

};


int main()
{
    student s[size];

    for(int i=0; i<size; i++)
      cout<<s[i].avg()<<endl;



    return 0;
}

