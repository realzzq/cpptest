#include <iostream>

// #define testConstexpre(...) \
//     testConstE<decltype(&__VA_ARGS__), &__testConstE>

class testConstE {};

int main(int, char **) {
    std::cout << "Hello, from CppTest!\n";
}
