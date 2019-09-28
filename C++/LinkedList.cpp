
template <class T> LinkedList {
  struct Node {
    T data;
    Node *next;
  }
public:
  LinkedList();
  insertHead(T data);
  deleteHead();
  ~LinkedList();

private:
  int size;
  Node* head;
};

LinkedList::LinkedList() {}
LinkedList::~LinkedList() {}
LinkedList::insertHead() {}
LinkedList::deleteHead() {}
