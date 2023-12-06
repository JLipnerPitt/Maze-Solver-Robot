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
    void enqueue(int);
    void dequeue();
    int peek();
    bool is_empty();
};
#endif
