#include <iostream>
using namespace std;
inline int square(int x){ 
    return x*x; 
	}
int add(int a,int b)
{ 
    return a+b; 
	}
double add(double a,double b)
{ 
return a+b; 
}
int main(){
    cout<<square(6)<<" "<<add(11,6)<<" "<<add(1.35,1.5);
}

