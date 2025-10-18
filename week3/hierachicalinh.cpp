#include<iostream>
using namespace std;

class person
{
	protected:
		int age;
		string name;
		char gender;
		
		void getp()
		{
			cout<<"Enter name, age, gender"<<endl;
			cin>>name>>age>>gender;
		}
		
void showp()
{
	cout<<"Name:"<<name<<endl;
	cout<<"Age:"<<age<<endl;
	cout<<"Gender:"<<gender<<endl;
}

};

class student : public person
{
	public:
		float per;
		int pno;
		
		void getst()
		{
			getp();
			cout<<"Enter pinno and percentage"<<endl;
			cin>>pno>>per;
		}
		void shows()
		{
			showp();
			cout<<"Pin no:"<<pno<<endl;
			cout<<"Percentage:"<<per<<endl;
		}

};		
 
class faculty: public person
{
	public:
		int empid;
		string sub;
		int exp;
		
		void getf()
		{
			getp();
			cout<<"Enter empid,sub,exp"<<endl;
			cin>> empid >> sub >> exp;
		}
		void showf()
		{
			showp();
			cout<<"Employee details"<<endl;
			cout<<"Empid:"<<empid<<endl;
			cout<<"Experience:"<<exp<<endl;
			cout<<"Subject:"<<sub<<endl;
		}
};
	
	int main()
	{
		faculty f;
		student s;
		s.getst();
		s.shows();
		f.getf();
		f.showf();	
	}

		


