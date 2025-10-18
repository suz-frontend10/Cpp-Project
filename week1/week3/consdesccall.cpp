#include<iostream>
using namespace std;

class A
{
	public:
		A()
		{
		cout<<"A cons is called"<<endl;
		}
		~A()
		{
		cout<<"A desc is called"<<endl;
		}
};

class B: public A
{	
        public:
		B()
		{
		cout<<"B cons is called"<<endl;
		}
		~B()
		{
		cout<<"B desc is called"<<endl;
		}
};

class C: public A
{	
        public:
		C()
		{
		cout<<"C cons is called"<<endl;
		}
		~C()
		{
		cout<<"C desc is called"<<endl;
		}
};
// Cons is called in sequential order
//Desc is called in reverse order

int main()
{
 B b;
 C c;	
}
	

