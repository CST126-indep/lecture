#include <iostream>

#include "string.h"
#include "vector.h"

template <typename T>
T add(T a, T b) {
  return a + b;
}

template <typename T>
void append(T * items, size_t & len, T newItem) {
  T * newItems = new T[len + 1]{};
  for (size_t i{}; i < len; ++i) {
    newItems[i] = items[i];
  }
  newItems[len] = newItem;
  ++len;
  delete[] items;
  items = newItems;
}

int main() {
  int * nums{};
  size_t len{};

  append(nums, len, 42);
  append(nums, len, 37);

  Vector<int> items;
  items.append(42);
}
