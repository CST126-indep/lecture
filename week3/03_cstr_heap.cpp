#include <iostream>

size_t mystrlen(const char * str) {
  size_t i{};
  //for (; str[i]; ++i) {}
  while (str[i]) {
    ++i;
  }
  return i;
}

void mystrcpy(char * dest, const char * src) {
  size_t i{};
  for (; src[i]; ++i) {
    dest[i] = src[i];
  }
  dest[i] = '\0';
}

// strdup, also known as "copy"
// this is a "deep copy" as opposed to a "shallow copy"
char * mystrdup(const char * str) {
  char * newStr = new char[mystrlen(str) + 1]{};
  mystrcpy(newStr, str);
  return newStr;
}

int main() {
  char buffer[256]{"my data here"}; // actually a "char *" type

/*
  char * str = new char[20]{};
  str[0] = 'a';
  delete[] str;
  */

  char * s = mystrdup(buffer);
  std::cout << s << '\n';
  delete[] s;
}
