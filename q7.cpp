#include<iostream>
using namespace std;
class Angle
{
    int degree;
    float minutes;
    char d;
    public:
    Angle():degree(0),minutes(0),d()
    {

    }
    Angle(int deg,float min,char dir)//three argument parametrized constructor
    {
        degree = deg;
        minutes = min;
        d = dir;
    }
    void getangle(int dm,float m, char direc)//
    {
        degree = dm;
        minutes = m;
        d = direc;
    }
    void display()
    {
        cout<<"Angle : "<<degree<<"\xF8"<<minutes<<"\'"<<d;
        if(d=='E'||d=='e'||d=='W'||d=='w')
        {
            cout<<" Longitude";
        }
        else if(d=='n'||d=='N'||d=='s'||d=='S')
        {
            cout<<" Latitude";
        }
    }
    void secangle()
    {
        int deg;
        float mime;
        char di;
        cout<<endl<<"Enter the degree"<<endl;
        cin>>deg;
        cout<<"Enter the minutes"<<endl;
        cin>>mime;
        cout<<"Enter the Direction (N/S/W/E)"<<endl;
        cin>>di;
        getangle(deg,mime,di);
    }
};

int main()
{ char change;
    Angle a1,a2;
    a1.getangle(120,34,'N');
    a1.display();
    do{
    a2.secangle();
    a2.display();
    cout<<endl<<"Do u want to change the angle (Y or N)"<<endl;
    cin>>change;
    }
    while(change == 'Y'||change == 'y');
}