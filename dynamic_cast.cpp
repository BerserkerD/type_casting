#include <iostream>
using namespace std;

class BaseClass {
   public:
    virtual void display() {
        std::cout << "BaseClass" << std::endl;
    }
};

class DerivedClass : public BaseClass {
   public:
    void display() {
        std::cout << "DerivedClass" << std::endl;
    }
};

int main() {
    BaseClass *basePtr = new DerivedClass();  // Upcasting
    basePtr->display();
    DerivedClass *derivedPtr;

    derivedPtr = dynamic_cast<DerivedClass *>(basePtr);  // Downcasting
    //如果转换失败则会返回空指针
    if (derivedPtr) {
        derivedPtr->display();  // Output: DerivedClass
    } else {
        std::cout << "Invalid type conversion.";
    }

    delete basePtr;
    return 0;
}