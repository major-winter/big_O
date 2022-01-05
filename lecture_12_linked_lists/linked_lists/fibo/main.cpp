#include <iostream>
using namespace std;

struct Node {
  long data;
  Node *next;
};
struct LinkedList {
  Node *head;
  Node *tail;
};

void init(LinkedList &lst) {
  lst.head = NULL;
  lst.tail = NULL;
}

Node *createNode(int x) {
  Node *p = new Node;
  p->data = x;
  p->next = NULL;
  return p;
}
void insertTail(LinkedList &lst, int x) {
  Node *p = createNode(x);
  if (lst.head == NULL)
    lst.head = lst.tail = p;
  else {
    lst.tail->next = p;
    lst.tail = p;
  }
}

void removeAll(LinkedList &lst) {
  while (lst.head != NULL) {
    Node *cur = lst.head;
    lst.head = lst.head->next;
    delete cur;
  }
  lst.tail = NULL;
}

void fibo(LinkedList &lst, Node* &a, Node* &b) {
  long data = (a->data + b->data) % 1000007;

  Node* c = createNode(data);
  a->next = b;
  a=b;
  b->next = c;
  b=c;

  cout << c->data << " ";
}

int main() {
  LinkedList lst;
  init(lst);
  long x, y, n, count = 2;
  cin >> x >> y >> n;
  insertTail(lst, x);
  insertTail(lst, y);
  Node *a = lst.head;
  Node *b = a->next;
  cout << a->data << " " << b->data << " ";

  while (count < n) {
    fibo(lst, a, b);
    count++;
  }
  removeAll(lst);
  return 0;
}
