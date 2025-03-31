#include <iostream>
#include "test.cpp"

int main() {
    std::cout << "hello world" << std::endl;

    Test t = Test();
    t.val = 3;

    std::cout << t.val << std::endl;

    return 0;
}