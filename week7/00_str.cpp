#include <iostream>

#include "string.h"

// Rule of 0/3/5

/*

{
  int x{42}; // ctor
  x = 1337; // operator=
  int y{x}; // copy ctor
} // implicit cleanup (delete, dtor)

*/

struct Point {
  int x;
  int y;
};

void foo(String str) {

} // dtor!

int main() {
  String str{"bob"};

  foo(str);

  String str2{str};

  String str3{"joe"};

  str3 = str2 = str;
} // dtors!
