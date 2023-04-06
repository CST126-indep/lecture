#include <iostream>
#include <cstring>

int main() {
    const char * str1{"bob"};
    const char * str2{"bob"};

    std::cout << std::boolalpha;
    std::cout << (str1 == str2) << '\n';
    std::cout << !std::strcmp(str1, str2) << '\n';
    // std::strlen
}