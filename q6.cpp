#include<iostream>
using namespace std;
char c;
enum etype{
    laborer,secretary,manager,accountant,executive,researcher
};
class Date
{
    int month,day,year;
    public:
    Date():month(0),day(0),year(0)
    {}
    void getdate()
    {
        cout<<"Enter date of first employment in mm/dd/yy format"<<endl;
        cin>>month>>c>>day>>c>>year;
    }
    void display_date()
    {
        cout<<"You were hired on "<<month<<c<<day<<c<<year;
    }
};
class Employee
{
    int emp_num;
    float emp_comp;
    Date d1;
    etype emp;
    public:
    void getdata()
    {
        cout<<"Enter the Employee Number"<<endl;
        cin>>emp_num;
        cout<<"Enter the employee compensation"<<endl;
        cin>>emp_comp;
        d1.getdate();
        char type;
        cout<<"Enter your type (first letter only)"<<"laborer,secretary,manager,accountant,executive,researcher"<<endl;
        cin>>type;
        switch(type)
        {
            case 'l': emp = laborer ;break;
            case 's': emp = secretary;break;
            case 'm': emp = manager;break;
            case 'a': emp = accountant;break;
            case 'e': emp = executive;break;
            case 'r': emp = researcher;break;
            default:
            cout<<"Invalid input";break;
        }
    }
    void displayemp()
    {
        cout<<"Employee Number = "<<emp_num<<endl;
        cout<<"Employee compensation = "<<emp_comp<<"$"<<endl;
        d1.display_date();
        cout<<endl;
        switch(emp)
        {
            case laborer : cout<<"Employee is laborer";break;
            case secretary : cout<<"emplyee is secretary";break;
            case manager  : cout<<"Employee is manager";break;
            case accountant : cout<<"Employee is accountant";break;
            case executive : cout<<"Employee is executive";break;
            case researcher : cout<<"Employee is researcher";break;
            default:
            cout<<"Invalid input";break;
        }

    }
};
int main()
{
    Employee e;
    e.getdata();
    e.displayemp();
}