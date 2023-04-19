#include <iostream>

// Our goal is to build a Dynamic Array

void append(int *& items, size_t & len, int item) {
  // 1. create new data that's one bigger
  int * newItems = new int[len + 1]{};
  // 2. copy over the data
  for (size_t i{}; i < len; ++i) {
    newItems[i] = items[i];
  }
  // 3. copy over the new data
  newItems[len] = item;
  ++len;
  // 4. delete the old one and reassign
  delete[] items;
  items = newItems;
}

void deleteAll(int *& items, size_t & len) {
  delete[] items;
  items = nullptr;
  len = 0;
}

int main() {
  // int nums[]{2, 4, 6};

  int * xs{}; // nullptr
  size_t len{};
  append(xs, len, 42);
  append(xs, len, 1337);

  for (size_t i{}; i < len; ++i) {
    std::cout << xs[i] << '\n';
  }

  deleteAll(xs, len);
}
