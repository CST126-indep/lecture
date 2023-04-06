#include <iostream>
#include <cstring>

/*

char lines[100][256]{};
size_t numLines{};

std::ifstream fin{"myfile.txt"};
while (fin >> lines[numLines]) {
    ++numLines;
}

*/

int main(int argc, char ** argv) {
    // stack vs heap vs symbol table
    // ...
    // stack
    int x{42};
    int xs[]{2, 4, 6, 8};

    // symbol table
    const char * str{"bob"};
    std::cout << "joe" << '\n';

    // pointers in general...
    int * p = &x;
    std::cout << p << '\n';

    // heap
    int * nums{};
    size_t amount{};

    std::cout << "Enter how many: ";
    std::cin >> amount;
    nums = new int[amount]{};

    std::cout << nums[0] << '\n';

    delete[] nums;
}