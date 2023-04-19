#include <iostream>

struct Point {
  int x;
  int y;
};

// pass by value
void incByValue(Point p) {
  p.x += 1;
  p.y += 1;
}

// pass by reference
void incByRef(Point & p) {
  p.x += 12;
  p.y += 12;
}


void incByConstRef(const Point & p) {
  // p.x += 42;
  // p.y += 42;
}

int main() {
  Point p{2, 4};

  incByValue(p);
  incByRef(p);
  incByConstRef(p);
}