#include<iostream>
using namespace std;
char c;
class Fraction 
{
    int num,den;
    public:
    Fraction():num(0),den(0)
    {
    }
    void getfract()
    {
        cout<<"Enter the fraction"<<endl;
        cin>>num>>c>>den;
    }
    Fraction addfract(Fraction f1,Fraction f2)
    {
        Fraction f3;
        f3.num = (f1.num*f2.den) + (f1.den*f2.num);
        f3.den = (f1.den*f2.den);
        return f3;
    }
    void display()
    {
        cout<<"Sum of fraction = "<<num<<c<<den;
    }

};
int main()
{
    char cont;
    do{
    Fraction f1,f2,f3,f4;
    f1.getfract();
    f2.getfract();
    f4=f3.addfract(f1,f2);
    f4.display();
    cout<<endl;
    cout<<"Do you want to continue(Y or N)"<<endl;
    cin>>cont;
    }
    while (cont == 'Y');
  
}