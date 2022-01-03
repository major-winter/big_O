#include <iostream>
using namespace std;

struct Num {
  int order;
  int data;
};

struct Node {
  Num data;
  Node *next;
};

struct LinkedList {
  Node *head;
  Node *tail;
};

Node *createNode(Num x) {
  Node *p = new Node;
  p->data = x;
  p->next = NULL;
  return p;
}

void init(LinkedList &lst) {
  lst.head = NULL;
  lst.tail = NULL;
}

void insertTail(LinkedList &lst, Num x) {
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

void printList(LinkedList &lst) {
  Node *cur = lst.head;
  while (cur != NULL) {
    cout << cur->data.order << " " << cur->data.data << " ";
    cur = cur->next;
  }
}

int main() {
  LinkedList lst;
  init(lst);
  int x;
  int count = 1;
  Num n;
  while (true) {
    cin >> x;
    if (x == 0)
      break;
    n.data = x;
    n.order = count;
    insertTail(lst, n);
    count++;
  }

  printList(lst);
  removeAll(lst);
  return 0;
}
