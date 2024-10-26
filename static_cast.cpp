#include <iostream>

using namespace std;

class Base {
public:
    Base() {cout << "Base constructor is called" << endl;}
    virtual ~Base() {cout << "Base destructor is called" << endl;}
};

class Derived : public Base {
public:
    Derived() {cout << "Derived constructor is called" << endl;}
    ~Derived() {cout << "Derived destructor is called" << endl;}
    int get_val() {return val;}
private:
    int val;
};

int main() {
    
    int i = 42;
    float f = static_cast<float>(i);

    cout << f << endl;

    Base *bptr = new Derived;
    Derived *dptr = static_cast<Derived*>(bptr);
    cout << dptr->get_val() << endl;

    delete dptr;
    
    return 0;
}
