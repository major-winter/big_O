#include <iostream>

using namespace std;

struct Node {
  int data;
  Node *left;
  Node *right;
};

Node *createNode(int a) {
  Node *newNode = new Node();
  newNode->data = a;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

void addToBST(Node *&root, int a) {
  if (root == NULL) {
    root = createNode(a);
    return;
  } else {
    if (a < root->data) addToBST(root->left, a);
    else addToBST(root->right, a);
  }
}

void deleteTree(Node *&root) {
  if (root == NULL)
    return;
  deleteTree(root->left);
  deleteTree(root->right);
  delete root;
  root = NULL;
}

void sum(Node *&root, int x, int &s) {
  if (root == NULL)
    return;
  if (root->data < x)
    s += root->data;
  sum(root->left, x, s);
  sum(root->right, x, s);
}

int main() {
  int n, x, a;
  cin >> n >> x;
  Node *rootBST = NULL;
  while (n > 0) {
    cin >> a;
    addToBST(rootBST, a);
    n--;
  }
  int s = 0;
  sum(rootBST, x, s);
  cout << s;
  deleteTree(rootBST);
  return 0;
}
