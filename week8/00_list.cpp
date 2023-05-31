// Linked List example

#include <iostream>

template <typename T>
struct Node {
  T data;
  Node * next;
};

template <typename T>
struct List {
  Node<T> * head;
  Node<T> * tail;

  // default ctor
  List() = default;

  // dtor
  ~List() {
    // ...
  }

  // copy ctor
  List(const List<T> & other) {
    // ...
  }

  // operator=
  List<T> & operator=(const List<T> & other) {
    // ...
  }
};

template <typename T>
void append(List<T> & list, T data) {
  Node<T> * node = new Node<T>{data};

  if (list.head == nullptr) {
    list.head = node;
    list.tail = node;
  } else {
    list.tail->next = node;
    list.tail = node;
  }
}

int main() {
  List<int> list{};

  // append to an empty list
  // 1. create the node
  // 2. point head and tail to it
  Node<int> * node1 = new Node<int>{42};
  list.head = node1;
  list.tail = node1;

  // append(list, 42);

  // append to an existing list
  Node<int> * node2 = new Node<int>{37};
  list.tail->next = node2;
  list.tail = node2;

  // append(list, 37);

  // append to an existing list (again)
  Node<int> * node3 = new Node<int>{-7};
  list.tail->next = node3;
  list.tail = node3;

  // append(list, -7);

  Node<int> * cur = list.head;
  while (cur != nullptr) {
    std::cout << cur->data << '\n';
    cur = cur->next;
  }

  List<float> list2{};
  append(list2, 20.f);
  append(list2, 30.f);
}
