#include<iostream>
using namespace std;
class shapes
{
	public:
		void area(int S)
		{
			cout<<"Area of Square="<<S*S<<endl;
		}
		void area(int l,int b)
		{
			cout<<"Area of Rectangle="<<l*b<<endl;
		}
		void area(float r)
		{
			cout<<"Area of Circle="<<3.14*r*r<<endl;
		}
		void add(int b,int h)
		{
			cout<<"Area of triangle="<<(float)1/2*(b*h)<<endl;
		}
};
int main()
{
	shapes s;
	s.area(4);
	s.area(4,3);
	s.area(4);
	s.area(4,2.3f);
	
	return 0;
	
}
