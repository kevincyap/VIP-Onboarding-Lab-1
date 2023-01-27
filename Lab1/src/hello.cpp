#include <iostream>
#include "name.hpp"

int main() {
    std::cout << "Hello, World! Enter your name: " << std::endl;
    string usr_name = get_name();
    std::cout << "Hello " << usr_name << std::endl;
    return 0;
}