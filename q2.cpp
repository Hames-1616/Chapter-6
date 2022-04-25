#include<iostream>
using namespace std;
const double toll = 0.5;
const char ESC = 27;
class Tollbooth
{
    private:
    unsigned int cars;
    double amount;
    public:
    Tollbooth():cars(0),amount(0)
    {

    }
    void payingcar()
    {
        cars++;
        amount = amount + 0.50;
    }
    void nopaycar()
    {
        cars++;
    }
    void display()
    {
        cout<<"Cars = "<<cars<<endl;
        cout<<"Amount = "<<amount;
    }
};
int main()
{
    Tollbooth t;
  char c;
  cout<<"Enter 1 for paying car and 0 for non paying car"<<endl;
  do{
  cin>>c;
  if(c=='1')
  {
      t.payingcar();
  }
  else if(c=='0')
  {
      t.nopaycar();
  }
  else 
  {
      cout<<"Wrong input"<<endl;
  }
  }
  while (c!=ESC);
  t.display();
}
