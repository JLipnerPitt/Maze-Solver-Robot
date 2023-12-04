#ifndef QUEUE_
#define QUEUE_

struct Node {
  int data;
  Node* next;
  Node(int d) 
  {
    data = d;
    next = nullptr;
  }
};

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
};
#endif
