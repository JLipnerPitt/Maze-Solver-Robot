#ifndef QUEUE_
#define QUEUE_

#include "Node.h"

class Queue {
  private:
    Node* front;
    Node* rear;

  public:
    Queue();
    ~Queue();
    void add(const int&);
    void remove();
    int peek();
    bool is_empty() const;
};
#endif
