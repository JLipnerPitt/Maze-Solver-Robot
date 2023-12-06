#ifndef Node_
#define Node_

class Node {
  private:
    int data;
    Node* next;
  
  public:
    Node();
    Node(const int&);
    void set_data(const int&);
    void set_next(Node*);
    int get_data() const;
    Node* get_next() const;
};

#endif