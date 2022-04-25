#include<iostream>
using namespace std;
class Int
{
    private :
    int x;
    public:
    Int():x(0)
    {

    }
    Int (int n)
    {
        x=n;
    }

    void add(Int n1,Int n2)
    {
        x=n1.x+n2.x;
    }

    void display()
    {
        cout<<x;
    }

};
int main()
{
    Int n1,n2(20),n3(30);
    n1.add(n2,n3);
    n1.display();

}