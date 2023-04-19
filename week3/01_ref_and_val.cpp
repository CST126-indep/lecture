#include <iostream>

// pass-by-reference
// & means mutable
void inc(int & x) {
  x += 1;
}

int main() {
  int num{42};

  inc(num);

  std::cout << "num: " << num << '\n';

  int y{num};
  y += 1;
  std::cout << "y: " << y << '\n';
  std::cout << "num: " << num << '\n';

  int & z = num;
  z += 5;
  std::cout << "z: " << z << '\n';
  std::cout << "num: " << num << '\n';

  const int & w = num;
  num += 1000;
  std::cout << "w: " << w << '\n';
  std::cout << "num: " << num << '\n';
}
