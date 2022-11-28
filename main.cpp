#include <iostream>

auto main() -> int {
    int* i = new int;
    delete i;
    std::cout << "Hello World !" << *i << std::endl;
    return 0;
}
