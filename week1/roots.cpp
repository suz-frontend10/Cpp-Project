 #include <iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,d;
	double r1,r2,r3;
	cout<<"Enter the value of a b and c";
	cin>>a>>b>>c;
	
	d = b*b-4*a*c;
	if(d=0)
	{
		r1 = -b/(2 * a);;
		cout<<"Root are real and equal i.e :"<<r1;
	}
	else if(d>0)
	{
		r2=(-b-sqrt(d)/2*a);
		r3=(-b+sqrt(d)/2*a);
		cout<<"Root are real and distinct i.e :"<<r2<<r3;
	}
	else
    {
	    r2 = -b / (2 * a);
        r3= sqrt(-d) / (2 * a);
		cout<<"Root are imaginary :"<<r3<<" "<<r2;	
	}
	return 0;
	
}

