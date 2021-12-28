#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int age, deg[7];

public:
    student()
    {
        cout<<"Enter student info: ";
        cin>>name>> age;

        for(int i = 0; i < 7; i++)
        {
            cout<<"Enter degree: "<< i+1<<" ";
            cin>>deg[i];
        }
    }

    float average()
    {
        int sum = 0;
        for(int i=0; i< 7; i++)
            sum+= deg[i];

        return sum/7.0;
    }

    friend void topStudent(student, student, student);
};


void topStudent(student s1, student s2, student s3){

   float topAVG = s1.average();
   string topName = s1.name;

   if(s2.average() > topAVG){
    topAVG = s2.average();
    topName = s2.name;
   }

   if(s3.average() > topAVG){
    topAVG = s3.average();
    topName = s3.name;
   }

   cout<<"Top student is: "<<topName<<endl;
   cout<<"with average: "<<topAVG<<endl;
}

int main()
{
    student s1, s2, s3;
    topStudent(s1, s2, s3);

    return 0;
}
