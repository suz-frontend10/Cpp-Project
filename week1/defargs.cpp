#include <iostream>
using namespace std;
class Demo {
    string name;
public:
    void setName(string n="Susanna Hebzibah.P"){ name=n; }
    void show(){ cout<<name<<endl; }
};
int main(){
    Demo d;
    d.setName();
    d.show();
}

