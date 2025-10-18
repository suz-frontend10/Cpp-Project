#include <iostream>
using namespace std;

class Sample {
private:
    int a;
public:
    int b;
protected:
    int c;

public:
    void setValues(int x, int y, int z) {
        a = x;
        b = y;
        c = z;
    }

    void showValues() {
        cout << "Private a = " << a << endl;
        cout << "Public b = " << b << endl;
        cout << "Protected c = " << c << endl;
    }
};

int main() {
    Sample obj;
    obj.setValues(10, 20, 30);
    obj.showValues();
    obj.b = 50;
    cout << "Accessing public b directly = " << obj.b << endl;
}

