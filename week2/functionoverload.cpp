#include<iostream>
using namespace std;

//They have same function name but differ in paramaters so its function overloading//

class sample
{ 
	public:
        //basic function with finction name show//
		void show()
		{
		   cout<<"Function with no parameters"<<endl;	
		}
		
		//Below one has has paramaters of datatype (int)//
		void show(int i)
		{
			cout<<"Integer value:"<<i<<endl;
		}
		
		//Below one has one paramater showing difference in datatype(double)//
		void show(double i)
		{
			cout<<"Double value:"<<i<<endl;	
		} 
		
		//Below one has one paramater showing difference in datatype(float)//
		void show(float f)
		{
			cout<<"Float value:"<<f<<endl;	
		}
			
		//Below one has one paramater showing difference in datatype(char)//
			void show(char c)
		{
			cout<<"Char value:"<<c;	
		}
};

int main()
{
	sample s;
	    s.show();
		s.show(7);
		s.show(11.7f);
		s.show(11.738);
	    s.show('S');
	    return 0;	
}



