#include<iostream>
using namespace std;
class Angle
{
    int latitude,longitude,degree;
    float minutes;
    char d;
    public:
    Angle():latitude(0),longitude(0)
    {

    }
    void getangle()
    {
        cout<<"Enter the degrees"<<endl;
        cin>>degree;
        cout<<"Enter the minutes"<<endl;
        cin>>minutes;
        cout<<"Enter the direction"<<endl;
        cin>>d;
    }
    void dispangle()
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

};
class Ship
{
    Angle longitude,latitude;
    static int count ;
    int shipno;
    public:
    Ship()
    {
        count++;
        shipno = count ;
    }
    void getposition()
    {
        cout<<"Enter the longitude of the ship"<<endl;
        longitude.getangle();
        cout<<"Enter the latitude of the ship"<<endl;
        latitude.getangle();
    }
    void displayship()
    {
        cout<<"Shipnumber = "<<shipno<<endl;
        longitude.dispangle();
        cout<<endl;
        latitude.dispangle();
    }  
};
int Ship :: count = 0;
int main()
{
  Ship s1,s2,s3;
  cout<<"Enter the position of ship "<<endl;
 s1.getposition();
  
  cout<<"Enter the position of ship"<<endl;
  s2.getposition();
 
  cout<<"Enter the position of the ship"<<endl;
  s3.getposition();
  
  cout<<endl;
  s1.displayship();
 cout<<endl;
 s2.displayship();
 cout<<endl;
 s3.displayship();
}