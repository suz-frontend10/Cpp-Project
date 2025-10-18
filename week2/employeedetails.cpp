#include<iostream>
using namespace std;
//Begining of class
class book
{ 
    private:
	string book_name;
	string author_name;
	float price;	
    public:
	void get()
	{
	
		cout << "Name of the author:"<<endl;
		getline(cin,author_name);
		
		cout << "Price of the book:";
		cin  >>  price;
		
		cin.ignore();  
		cout << "Name of the book:"<<endl;
        getline(cin,book_name);
	}
    void show()
    {
    	cout<<"Name of the book:"<<book_name<<endl;
    	cout<<"Name of the author:"<<author_name<<endl;
    	cout<<"Price of the book:"<<price<<endl;	  	
	}
	
};//End of the class
	int main()
	{
		book b;
		b.get();
		b.show();
		cout<<"THANK YOU FOR CHOOSING Susanna STORES";
	}
