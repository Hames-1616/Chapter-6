#include<iostream>
using namespace std;
class Serial
{
    static int count;
    int serialnumber;
    public:
    Serial()
    {
        count ++;
        serialnumber = count;
    }
    void display() 
    {
        cout<<"I am object Number "<<serialnumber<<endl;;
    }

};
int Serial::count=0;
int main()
{
    Serial s1,s2,s3;
    s1.display();
    s2.display();
    s3.display();
}