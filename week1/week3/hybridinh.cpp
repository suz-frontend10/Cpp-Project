#include<iostream> 
using namespace std; 

class student 
{ 
 protected: 
  int rno; 
  string name; 
  public: 
   void getst() 
   { 
    cout<<"Enter rollno and name:"; 
    cin>> rno >> name; 
   } 
   void shows() 
   { 
    cout<<"Roll no:"<< rno << endl; 
    cout<<"Name:"<<name << endl; 
   } 
}; 

class marks : public student 
{ 
 protected: 
  int m1,m2,m3; 
  public: 
   void getm() 
   { 
   getst(); 
   cout<<"Enter 3 subjects marks"; 
   cin>>m1>>m2>>m3; 
   }  
}; 

class project  
{ 
 protected:
 	int pmarks;
	public:
		void getp()
		{
			cout<<"Enter project marks";
			cin>>pmarks;	
		}
};

class percentage : public marks , public project
{
	public:
		float per;
		void showp()
		{
			getm();
			getp();
			per=(m1+m2+m3)/3.0;
			shows();
			cout<<"Percentage:"<<per<<endl;
		}
};


