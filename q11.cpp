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
        cout<<"Enter the fraction in a/b form"<<endl;
        cin>>num>>c>>den;

    }
    void dispfract()
    {
      cout<<num<<"/"<<den;
    }
    void fractlowterms()
    {
      long tnum, tden, temp, gcd;

	tnum = labs(num);	
	tden = labs(den);	

	if(tden == 0) {	
		cout <<"Illegal fraction: division by 0";
		exit(1);
	} else if (tnum == 0) {		
		num = 0; 
		den = 1;
		return;
	}
	
	while(tnum != 0) {
		if(tnum <tden) {	
			temp = tnum;	
			tnum = tden;
			tden = temp;	
		}
		tnum = tnum - tden;		
	}
	gcd = tden;		
	num = num/gcd;		
	den = den/gcd;		
	cout <<num <<"/" <<den;
	cout <<endl;
    }
	void operation(Fraction frac1,Fraction frac2)
	{
		char opr;
		cout<<"Enter the operation you want to perform"<<endl;
		cin>>opr;
		switch(opr)
		{
			case '+':
			cout << "\nAddition of two fraction is: ";
			num = (frac1.num * frac2.den) + (frac1.den * frac2.num);
			den = frac1.den * frac2.den;
		break;

		case '-':	
			cout <<"\nSubtraction of two fraction is: ";
			num = (frac1.num * frac2.den) - (frac1.den * frac2.num);
			den = frac1.den * frac2.den;
		break;

		case '*':	
			cout <<"\nMultiplication of two fraction is: ";
			num = frac1.num * frac2.num;
			den = frac1.den * frac2.den;
		break;

		case '/':	
			cout <<"\nDivision of two fraction is: ";
			num = frac1.num * frac2.den;
			den = frac1.den * frac2.num;
		break;

		}

	}

};
int main()
{
	Fraction f1,f2,f3;
	f1.getfract();
	f2.getfract();
	f3.operation(f1,f2);
	cout<<endl;
	f3.dispfract();
	cout<<endl;
	cout<<"Lowest terms = ";
	f3.fractlowterms();

}