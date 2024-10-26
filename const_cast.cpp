#include <cassert>
#include <iostream>
using namespace std;

void modifyVariable(int* ptr) {
    *ptr = 42;
}

int main() {
    const int original_value = 10;
    int* non_const_value_ptr = const_cast<int*>(&original_value);
    std::cout << "Original value: " << original_value << std::endl;

    modifyVariable(non_const_value_ptr);
    std::cout << "Modified value: " << *non_const_value_ptr << ", original_value: " << original_value << std::endl;

    cout << "origin address:   " << &original_value << endl;
    cout << "Modified address: " << non_const_value_ptr << endl;
    //结果是两个变量的地址是一样的，但是他们的值不一样
    //在C++中修改const的值是未被定义的，所以这是不正确的

    return 0;
}
