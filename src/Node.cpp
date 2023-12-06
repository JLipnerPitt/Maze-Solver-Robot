#include "Node.h"

Node::Node() {
  next = nullptr;
}

Node::Node(const int& d) {
  data = d;
  next = nullptr;
}

void Node::set_data(const int& d) {
  data = d;
}

void Node::set_next(Node* nextNodePtr) {
  next = nextNodePtr;
}

int Node::get_data() const {
  return data;
}

Node* Node::get_next() const {
  return next;
}

