#include<iostream>
using namespace std;

class demo
{
	private:
		int x;
		void get()
		{
			x=10;
		}
	friend void sum()
};

void sum
{
int y=8;
demo d;
d.get());
cout<<"Sum="<<d.x+y;
}

int main()
{
	sum;
}
