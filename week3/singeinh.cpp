//program for single inheritance//
#include<iostream>
using namespace std;
class person
{
	protected:
		string name;
		int age;
		char gender;
		
		void getp()
		{
			cout<<"Enter name, age , gender";
			cin>>name>>age>>gender;
		}
		
		void showp()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Age:"<<age<<endl;
			cout<<"Gender:"<<gender<<endl;
		}
};

// child class : specifier parent class
class student: public person
{
	public:
		float percentage;
		int pno;
		
		void gets()
		{
			getp();
			cout<<"Enter pno and percentage";
			cin>>pno>>percentage;
		}
		
		void display()
		{
			showp();
			cout<<"Pin no:"<<pno<<endl;
			cout<<"Percentage:"<<percentage<<endl;	
		}	
};
     int main()
     {
     	student s;
     	s.gets();
     	s.display();
	 }
