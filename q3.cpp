#include<iostream>
using namespace std;
const char c= ':';
class Time
{
    int hrs,secs,min;
    public:
    Time():hrs(0),secs(0),min(0)
    {

    }
    Time(int h,int m, int s)
    {
        hrs = h;
        min = m;
        secs = s;
    }
    void display()
    {
        cout<<"Time = "<<hrs<<c<<min<<c<<secs;
    }
    void addtime(Time t1,Time t2)
    {
        secs = t1.secs +t2.secs;
        if(secs>59)
        {
            secs = secs - 60;
            min ++;
        }

        min = min + t1.min + t2.min;
        if(min>59)
        {
            min = min - 60;
            hrs++;
        }
        hrs = hrs + t1.hrs +t2.hrs;
        if(hrs>12)
        {
            hrs = hrs - 12; 
        }

    }
};

int main()
{
    Time t1(12,50,00);
    Time t2(3,50,00);
    Time t3;
    t3.addtime(t1,t2);
    t3.display();
}