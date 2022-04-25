#include<iostream>
using namespace std;
class Employee
{
    int empno;
    float compen;
    public:
    Employee():empno(0),compen(0)
    {}
    void getdata(int x)
    {
        cout<<endl<<endl;

        cout<<"For Employee "<<x<<endl;
        cout<<"Enter the employee Number"<<endl;
        cin>>empno;
        cout<<"Enter the compensation"<<endl;
        cin>>compen;
    }
    void display(int x)
    {
        cout<<endl<<endl;
        cout<<"Employee "<<x<<endl<<endl;
        cout<<"Employee Number = "<<empno<<endl;
        cout<<"compensation = "<<compen<<"$";
    }

};
int main()
{
    Employee e1,e2,e3;
    e1.getdata(1);
    e2.getdata(2);
    e3.getdata(3);
    e1.display(1);
    e2.display(2);
    e3.display(3);
}