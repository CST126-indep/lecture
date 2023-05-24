#pragma once

template <typename T>
struct Vector {
  T * items{};
  size_t len{};

  // default ctor
  Vector() = default;

  // copy ctor
  Vector(const Vector & other) {

  }

  // dtor
  ~Vector() {

  }

  // operator=
  Vector & operator=(const Vector & other) {

  }

  void append(T newItem) {
    // logic here
  }
};
