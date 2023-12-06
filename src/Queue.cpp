#include "Queue.h"

Queue::Queue() {
  front = nullptr;
  rear = nullptr;
}
Queue::~Queue() {
  
}

void Queue::enqueue(int d) {
  Node* temp = new Node(d);

  if (front == nullptr) {
    front = rear = temp;
  }
  else {
    rear->set_next(temp);
  }
}

void Queue::dequeue() {
  if (front == nullptr) {
    return;
  }
  else {
    Node* temp = front;
    front = front->get_next();
    if (front = nullptr) {
      rear = nullptr;
    }
    delete temp;
    temp = nullptr;
  } 
}

int Queue::peek() {
  return front->get_data();
}

bool Queue::is_empty() {
  if (front == nullptr) {
    return true;
  }
  return false;
}