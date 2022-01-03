#include <iostream>
using namespace std;

struct Room {
  string number;
  int price;
  bool isEmpty;
};

struct Node {
  Room data;
  Node *next;
};

struct LinkedList {
  Node *head = NULL;
  Node *tail = NULL;
};

Node *createNode(Room r) {
  Node *p = new Node;
  p->data = r;
  p->next = NULL;
  return p;
}

void init(LinkedList &lst) {
  lst.head = NULL;
  lst.tail = NULL;
}

void insertTail(LinkedList &lst, Room r) {
  Node *p = createNode(r);
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

void printList (LinkedList &lst) {
  Node *cur = lst.head;

  while (cur != NULL) {
    if (cur->data.isEmpty == 0) {
      cout << cur->data.number << " " << cur->data.price << endl;
    }
    cur = cur->next;
  }
}

int main() {
  LinkedList lst;
  init(lst);
  int n;
  cin >> n;
  Room r;
  while (n > 0) {
    cin >> r.number >> r.price >> r.isEmpty;
    insertTail(lst, r);
    n--;
  }
  printList(lst);
  removeAll(lst);
  return 0;
}

