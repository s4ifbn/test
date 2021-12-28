#include <iostream>
using namespace std;

class temperature
{
private:
    float c, f;

public:

    void CtoF()
    {   cout<<"Enter Temp in C: ";
        cin>>c;
        f=(1.8*c)+32;
        cout<<"Temp in F: "<<f<<endl;
    }

    void FtoC()
    {
        cout<<"Enter Temp in F: ";
        cin>>f;
        c= (f-32)/1.8;
        cout<<"Temp in C: "<<c<<endl;
    }
};

int main ()
{
    temperature t;

    cout<<"press 1 to convert from C to F"<<endl;
    cout<<"press 2 to convert from F to C"<<endl;

    char ans;
    cin>>ans;

    if(ans == '1')
        t.CtoF();

    if(ans == '2')
        t.FtoC();

}
