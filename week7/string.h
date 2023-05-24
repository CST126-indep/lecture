#pragma once

#include <cstring>

// Rule of 3
struct String {
  char * cstr{};
  size_t len{};

  // default ctor
  String() = default;

  // ctor
  String(const char * str) {
    len = std::strlen(str);
    char* newItem = new char[len + 1]{};
    std::strcpy(newItem, str);
    cstr = newItem;
  }

  // copy ctor
  String(const String & other) : String{other.cstr} {
  }

  // dtor
  ~String() {
    delete[] cstr;
    cstr = nullptr;
    len = 0;
  }

  // operator=
  String & operator=(const String & other) {
    if (this == &other) {
      return *this;
    }

    // dtor
    delete[] cstr;
    cstr = nullptr;
    len = 0;

    // copy ctor
    len = std::strlen(other.cstr);
    char* newItem = new char[len + 1]{};
    std::strcpy(newItem, other.cstr);
    cstr = newItem;

    return *this;
  }
};
