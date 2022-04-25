#include<iostream>
using namespace std;
char c = '/';
class Date
{
    int month,day,year;
    public:
    Date():month(0),day(0),year(0)
    {}
    void getdate()
    {
        cout<<"Enter date in mm/dd/yy format"<<endl;
        cin>>month>>c>>day>>c>>year;
    }
    void display()
    {
        cout<<month<<c<<day<<c<<year;
    }
};
int main()
{
    Date d1;
    d1.getdate();
    d1.display();
}

