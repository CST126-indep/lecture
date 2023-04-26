#include <iostream>

template <typename T, typename F>
void forEach(T items[], size_t len, F fn) {
  for (size_t i{}; i < len; ++i) {
    fn(items[i]);
  }
}

int main() {
  int xs[]{2, 4, 6};

  auto print = [](auto item) {
    std::cout << item << '\n';
  };

  forEach(xs, 3, print);

  // ---

  auto add = [](auto initial) {
    return [=](auto value) {
      return initial + value;
    };
  };

  auto add42 = add(42);
  auto result = add42(2); // 44
}
